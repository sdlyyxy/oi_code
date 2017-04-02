#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstring>
#include<cctype>
#include<vector>
#include<cstdlib>
#include<ctime>
using namespace std;
#define REP(i,begin,end) for(int (i)=(begin);(i)<(end);i++)
const int maxn=1010;
int fa[maxn],ans[maxn];
int getFather(int x){
	if(x!=fa[x])fa[x]=getFather(fa[x]);
	return fa[x];
}
void unite(int a,int b){
	int x=getFather(a),y=getFather(b);
	if(x!=y)fa[x]=y;
}
int main(){
//	freopen("d:/in.txt","r",stdin);
	int T;
	cin>>T;
	while(T--){
		int N;
		vector<int> list[1540];
		cin>>N;
		REP(i,0,N)fa[i]=i;
		memset(ans,0,sizeof ans);
		REP(i,0,N){
			int K;
			scanf("%d",&K);
			REP(j,0,K){
				int h,m;
				scanf("%d:%d",&h,&m);
				int t=h*60+m;
			//	printf("i=%dj=%dt=%d\n",i,j,t);
				list[t].push_back(i);
			}
		}
		REP(i,0,1440)
			REP(j,1,list[i].size())
				unite(list[i][0],list[i][j]);
//		REP(i,0,N)printf("fa[%d]=%d\n",i,fa[i]);
		REP(i,0,N)ans[getFather(i)]++;
		vector<int> outList;
		REP(i,0,N)if(ans[i])outList.push_back(ans[i]);
		sort(outList.begin(),outList.end());
		int l=outList.size();
		printf("%d\n",l);
		REP(i,0,l-1)printf("%d ",outList[i]);
		printf("%d\n",outList[l-1]);
		/*
		 * This will WA.Don't know why....
		printf("%d\n",outList.size());
        REP(i,0,outList.size())printf("%d ",outList[i]);
        if(outList.size())puts("\n");
		*/
	}
	return 0;
}

