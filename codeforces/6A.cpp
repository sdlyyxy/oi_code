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


bool bigger=false,equ=false;
int a[4];
void check(int i,int j,int k){
	if(a[i]+a[j]>a[k])bigger=true;
	if(a[i]+a[j]==a[k])equ=true;
}
int main(){
#ifdef LOCAL
#endif

	cin>>a[0]>>a[1]>>a[2]>>a[3];
	sort(a,a+4);
	//bool bigger=false,equ=false;
	check(0,1,2);check(0,1,3);check(0,2,3);check(1,2,3);
	if(bigger)puts("TRIANGLE");
	else if(equ)puts("SEGMENT");
	else puts("IMPOSSIBLE");
	return 0;
}

