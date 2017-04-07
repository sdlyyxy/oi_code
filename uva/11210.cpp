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
const char* mahjong[]={
	"1T","2T","3T","4T","5T","6T","7T","8T","9T",
	"1S","2S","3S","4S","5S","6S","7S","8S","9S",
	"1W","2W","3W","4W","5W","6W","7W","8W","9W",
	"DONG","XI","NAN","BEI",
	"ZHONG","BAI","FA"
};
int convert(char *s){
	REP(i,0,34)if(strcmp(s,mahjong[i])==0)return i;
	return -1;
}
int c[35];
bool search(int dep){
	REP(i,0,34){
		if(c[i]>=3){
			if(dep==3)return true;
			c[i]-=3;
			if(search(dep+1)) return true;
			c[i]+=3;
		}
	}
	REP(i,0,24){
		if(i%9<=6 && c[i] && c[i+1] && c[i+2]){
			if(dep==3)return true;
			c[i]--;c[i+1]--;c[i+2]--;
			if(search(dep+1)) return true;
			c[i]++;c[i+1]++;c[i+2]++;
		}
	}
	return false;
}
bool check(){
	REP(i,0,34){
		if(c[i]>=2){
			c[i]-=2;
			if(search(0))return true;
			c[i]+=2;
		}
	}
	return false;
}
int main(){
#ifdef LOCAL
	MYIN;
#endif
	int kase=0;
	bool ok;
	char s[100];
	int mj[15];
	while(scanf("%s",s)==1){
		if(s[0]=='0')break;
		printf("Case %d:",++kase);
		mj[0]=convert(s);
		REP(i,1,13){
			scanf("%s",s);
			mj[i]=convert(s);
		}
		//LOG;
		ok=false;
		REP(i,0,34){
			MSET(c,0);
			REP(j,0,13)c[mj[j]]++;
			if(c[i]>=4)continue;
			c[i]++;
			//LOG;
			if(check()){
				ok=true;
				printf(" %s",mahjong[i]);
			}
		}
		if(!ok)printf(" Not ready");
		puts("");
	}
	return 0;
}


