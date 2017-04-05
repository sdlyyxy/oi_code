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
typedef long long LL;
#define REP(i,begin,end) for(int (i)=(begin);(i)<(end);i++)
const int prime=1000000007;
struct Tmatrix{
	LL a,b,c,d;
	Tmatrix operator * (const Tmatrix &x) const{
		LL w,x_,y,z;
		w=(a*x.a+b*x.c)%prime;
		x_=(a*x.b+b*x.d)%prime;
		y=(c*x.a+d*x.c)%prime;
		z=(c*x.b+d*x.d)%prime;
		return (Tmatrix){w,x_,y,z};
	}
}base,ans;
void poww(LL x){
	if(!x)return;
	poww(x>>1);
	ans=ans*ans;
	if(x&1)ans=ans*base;
}
int main(){
	LL n;
	cin>>n;
	if(!n){
		puts("1");
		return 0;
	}
	base=(Tmatrix){0,3,1,2};
	ans=(Tmatrix){1,0,0,1};
	poww(n-1);
	LL res=(ans.b+ans.d)%prime;
	cout<<res<<endl;
	return 0;
}

