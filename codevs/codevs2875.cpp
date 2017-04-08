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
const int maxn=10005;
//there say length of word will not be more than 100..but i 150 Then RE
int main(){
#ifdef LOCAL
	MYIN;
	//MYOUT;
#endif
	set<string> dict;
	int n,m;
	readint(n);
	REP(i,0,n){
		string tmp;
		char s[maxn];
		scanf("%s",s);
		dict.insert(tmp=s);
	}
	readint(m);
	REP(i,0,m){
		string tmp;
		char s[maxn];
		scanf("%s",s);
		if(dict.count(tmp=s))puts("Yes");else puts("No");
	}
	return 0;
}


