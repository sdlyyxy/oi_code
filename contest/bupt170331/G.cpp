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
int cnt[110];
int main(){
	int all=0;
	REP(a,1,7)REP(b,1,7)REP(c,1,7)REP(d,1,7)REP(e,1,7)REP(f,1,7)REP(g,1,7){
		cnt[a+b+c+d+e+f+g]++;
		all++;
	}
	//REP(i,1,10)printf("cnt[%d]=%d\n",i,cnt[i]);
	int a;
	while(cin>>a){
		printf("%.4lf\n",(cnt[a]+0.0)/all);
	}
			
	return 0;
}

