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
const double eps=1e-7;
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
inline int readint(int &n){return scanf("%d",&n);}

const int maxn=40000;
int sum[maxn];
int ans[maxn];
int getsum(int p){
	int res=0;
	do{
		res+=sum[p];
		p-=lowbit(p);	
	}while(p);
	return res;
}
void add(int p){
	while(p<=maxn){
		sum[p]++;
		p+=lowbit(p);
	}
}
int main(){
#ifdef LOCAL
#endif
	int n;
	readint(n);
	REP(i,0,n){
		int x,y;
		scanf("%d%d",&x,&y);
		x++;//binary index tree must begin at 1 because add
		ans[getsum(x)]++;
		add(x);
	}
	REP(i,0,n)printf("%d\n",ans[i]);
	return 0;
}

