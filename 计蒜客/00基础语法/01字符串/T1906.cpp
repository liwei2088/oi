#include <cstring>
#include <iostream>
using namespace std;
string s;
int main() {
    cin >> s;
    for (int i = 0; s[i]; i++)
        if(s[i]>='a' && s[i]<='z')
            if (s[i] == 'w')
                s[i] = 'a';
            else if (s[i] == 'x')
                s[i] = 'b';
            else if (s[i] == 'y')
                s[i] = 'c';
            else if (s[i] == 'z')
                s[i] = 'd';
            else
                s[i] = s[i] + 4;
        else 
            if (s[i] == 'W')
                s[i] = 'A';
            else if (s[i] == 'X')
                s[i] = 'B';
            else if (s[i] == 'Y')
                s[i] = 'C';
            else if (s[i] == 'Z')
                s[i] = 'D';
            else
                s[i] = s[i] + 4;
    cout<<s;
    return 0;
}