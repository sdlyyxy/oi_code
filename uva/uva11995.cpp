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
inline int readint(int &n){return scanf("%d",&n);}
int main(){
	MYIN;
	int n;
	while(readint(n)==1){
		//somtimes scanf() return -1 when EOF
		//printf("tmp=%d\n",tmp);
		bool canStack=1;
		bool canQueue=1;
		bool canPriority=1;
		stack<int> myStack;
		queue<int> myQueue;
		priority_queue<int> myPriority;
		while(n--){
			int x,y;
			readint(x);readint(y);
			if(x==1){
				myStack.push(y);
				myQueue.push(y);
				myPriority.push(y);
			}
			else{
				if(myStack.empty() || myStack.top()!=y)canStack=false;
				else myStack.pop();
				if(myQueue.empty() || myQueue.front()!=y)canQueue=false;
				else myQueue.pop();
				if(myPriority.empty() || myPriority.top()!=y)canPriority=false;
				else myPriority.pop();
			}
		}
		int num=int(canStack)+int(canQueue)+int(canPriority);
		if(!num)puts("impossible");
		else if(num>1)puts("not sure");
		else if(canStack)puts("stack");
		else if(canQueue)puts("queue");
		else if(canPriority)puts("priority queue");
	}
	return 0;
}


