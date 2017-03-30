#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstring>
#include<cctype>
#include<vector>
using namespace std;
#define REP(i,n) for(int (i)=0;(i)<(n);(i)++)
struct Job{
	int j,b;
	bool operator < (const Job &x) const{
		return j>x.j;
	}
};
int main(){
	int n,b,j,kase=1;
	while(scanf("%d",&n)==1&&n){
		vector<Job> v;
		REP(i,n){
			scanf("%d%d",&b,&j);
			v.push_back((Job){j,b});
		}
		sort(v.begin(),v.end());
		int s=0;
		int ans=0;
		REP(i,n){
			s+=v[i].b;
			ans=max(ans,s+v[i].j);
		}
		printf("Case %d: %d\n",kase++,ans);
	}
	return 0;
}
