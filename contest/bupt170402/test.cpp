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
const int prime=1000000007;
long long f[500];

int main(){
	f[0]=1;
	f[1]=1;
	REP(i,2,500)f[i]=(2*f[i-1]+3*f[i-2])%prime;
	while(1){
		int t;
		cin>>t;
		cout<<f[t]<<endl;
	}
	return 0;
}

