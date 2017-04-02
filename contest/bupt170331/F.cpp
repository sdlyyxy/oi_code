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
int A[8],B[8];
bool can[8];
int divide;
bool flag;
void dfs(int x){
	if(x==8){
		int res=0;
		if(!B[0])return;
		REP(i,0,8){res*=10;res+=B[i];}
		if(!(res%divide))flag=1;
		return;
	}
	REP(i,0,8){
		if(can[i]){
			can[i]=0;
			B[x]=A[i];
			dfs(x+1);
			can[i]=1;
		}
	}
}
int main(){
	int T;
	cin>>T;
	while(T--){
		REP(i,0,8)cin>>A[i];
		REP(i,0,8)can[i]=1;
		cin>>divide;
		flag=0;
		dfs(0);
		puts(flag?"Yes":"No");
	}
	return 0;
}

