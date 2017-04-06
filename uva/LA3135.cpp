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
inline int readint(int &n){return scanf("%d",&n);}
struct Item{
	int qnum,period,time;
	bool operator < (const Item &a) const{
		return time>a.time || (time==a.time && qnum>a.qnum);
	}
};
int main(){
#ifdef LOCAL
	puts("hehe");
	MYIN;
#endif
	priority_queue<Item> pq;
	char s[20];
	while(scanf("%s",s) && s[0]!='#'){
		Item item;
		scanf("%d%d",&item.qnum,&item.period);
		item.time=item.period;
		pq.push(item);
	}
	int K;
	readint(K);
	while(K--){
		Item item=pq.top();
		pq.pop();
		printf("%d\n",item.qnum);
		item.time+=item.period;
		pq.push(item);
	}
	return 0;
}


