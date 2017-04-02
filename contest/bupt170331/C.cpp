#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstring>
#include<cctype>
#include<vector>
#include<cstdlib>
#include<ctime>
using namespace std;
#define REP(i,begin,end) for(int (i)=(begin);(i)<(end);i++)
const int maxn=1010;
int num[maxn];
char s[maxn];
int main(){
//	freopen("d:/in.txt","r",stdin);
	int T;
	cin>>T;
//	cout<<T<<endl;
	while(T--){
		int n;
		int maxx=0;
		scanf("%d\n",&n);
		//cout<<n<<endl;
		REP(i,0,n){
			string s;
			getline(cin,s);
			//There may be empty line which means amplitude is 0.
			//Use cin will ignore these lines....
			//
//			string s;
//			cin>>s;
//			gets(s);
//			puts(s);
			num[i]=s.length();
			maxx=max(maxx,num[i]);
		}
//		cout<<maxx<<endl;
		int begin=0,end=n-1;
//		double ruler=(double)maxx/2;
//		cout<<"ruler="<<ruler<<endl;
//		//to deal with maxx is odd.There is another way which is use float numbers.
		int ruler=(maxx+1)/2;
		
		  REP(i,0,n)if(num[i]>=ruler){
			begin=i;
			break;
		}
		for(int i=n-1;i>=0;i--)if(num[i]>=ruler){
			end=i;
			break;
		}
		
		//while(num[begin]<ruler)begin++;
		//while(num[end]<ruler)end--;
		cout<<end-begin+1<<endl;
	}
	return 0;
}

