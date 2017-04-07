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
const int maxn=1010;
vector<int> gr[maxn],node[maxn];
int fa[maxn];
bool covered[maxn];
int n,s,k;
void dfs(int u,int f,int d){
	fa[u]=f;
	int nc=gr[u].size();
	if(nc==1 && d>k)node[d].PB(u);
	REP(i,0,nc){
		int v=gr[u][i];
		if(v!=f)dfs(v,u,d+1);
	}
}
void dfs2(int
int main(){
#ifdef LOCAL
	MYIN;
#endif
	int T;
	readint(T);
	while(T--){
		scanf("%d%d%d",&n,&s,&k);
		REP(i,0,n){
			gr[i].clear();
			node[i].clear();
		}
		REP(i,0,n){
			int a,b;
			scanf("%d%d",&a,&b);
			gr[a].PB(b);
			gr[b].PB(a);
		}
		dfs(s,-1,0);
		printf("%d\n",solve());
	return 0;
}


