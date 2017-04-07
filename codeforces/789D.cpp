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
const int maxn=1000000+10;
int fa[maxn];
int cnt[maxn],nself,to[maxn],from[maxn];
int cntfa[maxn];
bool hasself[maxn];
int getfa(int x){return fa[x]==x?x:fa[x]=getfa(fa[x]);}
void merge(int u,int v){
	int x=getfa(u);int y=getfa(v);
	fa[x]=y;
}
int main(){
#ifdef LOCAL
#endif
	int n,m;
	cin>>n>>m;
	REP(i,1,n+1)fa[i]=i;
	REP(i,0,m){
		int u,v;
		scanf("%d%d",&u,&v);
		merge(u,v);
		if(u==v){
			nself++;
			hasself[u]=true;
		}
		else{
			cnt[u]++;
			cnt[v]++;
		}
		from[i]=u;
		to[i]=v;
	}
#ifdef LOCAL
	REP(i,1,n+1)printf("fa[%d]=%d ",i,getfa(i));
	puts("");
#endif
	REP(i,1,n+1)cntfa[getfa(i)]++;
	int alone=0;
	REP(i,1,n+1)if(cntfa[i]==1){
		alone++;
		if(hasself[i]&&m!=1){
			puts("0");
			return 0;
		}
	}
	REP(i,1,n+1)if(cntfa[i]&&cntfa[i]!=1&&cntfa[i]!=n-alone){
		puts("0");
		return 0;
	}
	LL ans=0;
	REP(i,0,m){
		if(to[i]==from[i]){
			ans+=m-1;
			continue;
		}
		ans+=nself;
		ans+=cnt[to[i]]-1;
		ans+=cnt[from[i]]-1;
	}
	cout<<(ans/2)<<endl;
	return 0;
}


