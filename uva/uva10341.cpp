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
#include<bitset>
#include<queue>
#include<list>
#include<deque>
using namespace std;
typedef long long LL;
const double PI=acos(-1.0);
const double eps=1e-14;
//I tried 1e-3 and ac...
LL gcd(LL a,LL b){return b?gcd(b,a%b):a;}
LL lcm(LL a,LL b){return a/gcd(a,b)*b;}
#define REP(i,begin,end) for(int (i)=(begin);(i)<(end);(i)++)
#define DOWN(i,end,begin) for(int (i)=(end)-1;(i)>=(begin);(i)--)
#define PB(x) push_back(x)
#define MSET(a,x) memset((a),(x),sizeof(a))
#define lowbit(x) ((x)&(-(x)))
#define MYIN freopen("d:/in.txt","r",stdin)
#define MYOUT freopen("d:/out.txt","w",stdout)
#define LOG printf("Tag at line %d.\n",__LINE__)
#define F(x) (p*exp(-x)+q*sin(x)+r*cos(x)+s*tan(x)+t*(x)*(x)+u)
inline int readint(int &n){return scanf("%d",&n);}
int main(){
#ifdef LOCAL
#endif
	int p,q,r,s,t,u;
	while(scanf("%d%d%d%d%d%d",&p,&q,&r,&s,&t,&u)==6){
		double f0=F(0),f1=F(1);
		if(f1>eps||f0<-eps)printf("No solution\n");
		else{
			double x=0,y=1,m;
			REP(i,0,100){
				m=(x+y)/2;
				if(F(m)<0)y=m;else x=m;
				//why not use eps???
			}
			printf("%.4lf\n",m);
		}
	}
	return 0;
}


