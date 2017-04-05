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
typedef long long LL;
const int prime=1000000007;
LL ans,base;
void poww(LL x){
	if(!x)return;
	poww(x>>1);
	ans=(ans*ans)%prime;
	if(x&1)ans=(ans*base)%prime;
}
int main(){
	int n;
	while(cin>>n){
		LL res=1,C=1;
		REP(k,1,n){
			ans=1;base=k;
			poww(prime-2);
			C*=(n-k);C%=prime;
			C*=ans;C%=prime;
			base=n-k-1;ans=1;
			poww(k);
			res=(res+C*ans)%prime;
		}
		res*=n;
		res%=prime;
		cout<<res<<endl;
	}
	return 0;
}

