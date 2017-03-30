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
const int maxn=10000+5;
const char dirName[][10]={"L","Turning","R"};//for output convenience
struct Ant{
	int id;//input order id
	int p;//position (before/after)
	int d;//direction
	bool operator < (const Ant &x) const{
		return p<x.p;
	}
}before[maxn],after[maxn];
int order[maxn];//the i_th ant input is order[i]_th ant in after
int main(){
	int K;
	scanf("%d",&K);
	REP(kase,1,K+1){
		int L,T,n;
		scanf("%d%d%d",&L,&T,&n);
		REP(i,0,n){
			int p,d;
			scanf("%d %c",&p,&d);
			d=(d=='L'?-1:1);
			before[i]=(Ant){i,p,d};
			after[i]=(Ant){0,p+d*T,d};//after[i].id has no sense
		}
		sort(before,before+n);
		REP(i,0,n)order[before[i].id]=i;
		sort(after,after+n);
		REP(i,1,n)
			if(after[i].p==after[i-1].p)
				after[i].d=after[i-1].d=0;
		printf("Case #%d:\n",kase);
		REP(i,0,n){
			int index=order[i];
			if(after[index].p<0||after[index].p>L)puts("Fell off");
			else printf("%d %s\n",after[index].p,dirName[after[index].d+1]);
		}
		puts("");
	}
	return 0;
}

