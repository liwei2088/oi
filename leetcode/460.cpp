#include <iostream>
#include <set>
#include <unordered_map>
using namespace std;
//定义结构体
struct node {
    // cnt表示缓存使用频率 key和value表示键和值 time表示使用时间
    int cnt, time, key, value;
    //构造函数
    node(int _cnt, int _time, int _key, int _value) {
        cnt = _cnt, time = _time, key = _key, value = _value;
    }
    //重写比较函数
    bool operator<(const node& n) const {
        return cnt == n.cnt ? time < n.time : cnt < n.cnt;
    }
};

class LFUCache {
    // capacity表示缓存容量  time表示时间戳
    int capacity, time;
    //使用哈希保存键值
    unordered_map<int, node> key_table;
    //保存使用次数和键值信息（set其实是红黑树）
    set<node> s;

   public:
    //构造函数
    LFUCache(int _capacity) {
        capacity = _capacity;
        time = 0;
        key_table.clear();
        s.clear();
    }

    int get(int key) {
        //如果缓存容量是0 则直接返回-1
        if (capacity == 0) return -1;
        auto it = key_table.find(key);
        //如果没有找到 也返回-1
        if (it == key_table.end()) return -1;
        //如果找到，返回缓存中的键值数据node
        node cache = it->second;
        //删除旧的缓存数据
        s.erase(cache);
        cache.cnt++;
        cache.time = ++time;
        //将新的缓存数据放入到哈希表和平衡二叉树中
        s.insert(cache);
        it->second = cache;
        return cache.value;
    }

    void put(int key, int value) {
        if (capacity == 0) return;
        auto it = key_table.find(key);
        //如果没有找到键值
        if (it == key_table.end()) {
            //如果容量已满
            if (key_table.size() == capacity) {
                //删除最少使用的缓存
                key_table.erase(s.begin()->key);
                s.erase(s.begin());
            }
            //创建新的缓存
            node cache = node(1, ++time, key, value);
            //将新的缓存数据放入到哈希表和平衡二叉树中
            key_table.insert(make_pair(key, cache));
            s.insert(cache);
        } else {
            //如果找到，返回缓存中的键值数据node
            node cache = it->second;
            //删除旧的缓存数据
            s.erase(cache);
            cache.cnt++;
            cache.time = ++time;
            cache.value = value;
            //将新的缓存数据放入到哈希表和平衡二叉树中
            s.insert(cache);
            it->second = cache;
        }
    }
};

int main() {
    LFUCache cache(2);
    cache.put(3, 1);
    cache.put(2, 1);
    cache.put(2, 2);
    cache.put(4, 4);
    cache.get(2);
    return 0;
}