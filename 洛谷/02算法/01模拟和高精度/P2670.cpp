#include <iostream>
using namespace std;

char map[105][105];

int n,m;

int main() {
	int i,j,cnt;
	char s[105];
	cin>>n>>m;
	for(i=1; i<=n; i++) {
		cin>>s+1;
		for(j=1; j<=m; j++) {
			map[i][j]=s[j];
		}
	}
	for(i=1; i<=n; i++) {
		for(j=1; j<=m; j++) {
			if(map[i][j]=='?'){
				cnt=0;
				if(i-1>0 && map[i-1][j]=='*')
					cnt++;
				if(i+1<=n && map[i+1][j]=='*')
					cnt++;
				if(j-1>0 && map[i][j-1]=='*')
					cnt++;
				if(j+1<=m && map[i][j+1]=='*')
					cnt++;
				if(i-1>0 && j-1>0 && map[i-1][j-1]=='*')
					cnt++;
				if(i+1<=n && j-1>0 && map[i+1][j-1]=='*')
					cnt++;
				if(i-1>0 && j+1<=m && map[i-1][j+1]=='*')
					cnt++;
				if(i+1<=n && j+1<=m && map[i+1][j+1]=='*')
					cnt++;
				map[i][j]=cnt+'0';
			}
		}
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			cout<<map[i][j];
		}
		cout<<endl;
	}
	return 0;
}