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
struct Tsum{int d,sum;};
int main(){
#ifdef LOCAL
#endif
	set<int> item;
	set<int> reached;
	//for same sum don't appear twice in queue
	int n,k;
	cin>>n>>k;
	bool existPos=false,existNeg=false;
	REP(i,0,k){
		int tmp;
		readint(tmp);
		tmp-=n;
		if(tmp>0)existPos=true;
		if(tmp<0)existNeg=true;
		item.insert(tmp);
	}
	if(existPos^existNeg){
		puts("-1");
		return 0;
	}
	queue<Tsum> q;
	q.push((Tsum){0,0});
	while(!q.empty()){
		Tsum x=q.front();
		q.pop();
#ifdef LOCAL
		printf("x.d=%dx.sum=%d\n",x.d,x.sum);
#endif
		if(x.d!=0&&x.sum==0){
			cout<<x.d;
			return 0;
		}
		for(set<int>::iterator i=item.begin();i!=item.end();i++){
			int res=x.sum+*i;
			if(res>-1010&&res<1010&&!reached.count(res)){
				q.push(Tsum{x.d+1,res});
				reached.insert(res);
			}
		}
	}
	return 0;
}


