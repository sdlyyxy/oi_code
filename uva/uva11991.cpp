#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstring>
#include<cctype>
#include<vector>
#include<ctime>
#include<cstdlib>
#include<set>
#include<stack>
#include<map>
using namespace std;
typedef long long LL;
#define REP(i,begin,end) for(int (i)=(begin);(i)<(end);(i)++)
int main(){
	map< int,vector<int> >a;
	int n,m,x,y;
	while(scanf("%d%d",&n,&m)==2){
		a.clear();
		REP(i,0,n){
			scanf("%d",&x);
//			if(!a.count(x))a[x]=vector<int>();
			a[x].push_back(i+1);
		}
		while(m--){
			scanf("%d%d",&x,&y);
			if(!a.count(y) || a[y].size()<x)puts("0");
			else printf("%d\n",a[y][x-1]);
		}
	}
	return 0;
}


