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
int h[200];
int main(){
	int n,T;
	while(scanf("%d%d",&n,&T)==2){
		REP(i,0,n)scanf("%d",&h[i]);
		double tmp=0;
		REP(i,0,n)tmp+=sqrt(2*h[i]);
		tmp/=T;
		printf("%.7lf\n",tmp*tmp);
	}
	return 0;
}

