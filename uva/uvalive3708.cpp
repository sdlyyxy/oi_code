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
int main(){
	int n,m;
	while(scanf("%d%d",&n,&m)==2){
		double ans=0;
		for(int i=1;i<n;i++){
			double pos=(double)i/n*(n+m);
			ans+=fabs(pos-round(pos))/(n+m);
		}
		printf("%.4lf\n",ans*10000);
	}
	return 0;
}

