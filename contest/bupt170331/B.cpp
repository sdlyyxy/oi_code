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
int map[11][11];
bool map[11][11][4];
//0:----->,1|     2\..            3/   
//			|		\             /   
//			|		 \			 /	
//			\/		 \/			\/	
int check(){
	int res=0;
	REP(x,0,10)
		REP(y,0,10){
			if(map[x][y]=='.')continue;
			char c=map[x][y];
			if(map[x][y][0]){
				map[x][y][0]=0;
				int p=y;
				int cnt=1;
				while((++p)<10&&map[x][p]==c)cnt++;
				if(cnt>=5){
					res+=cnt;
					int p=y;
					while((++p)<10&&map[x][p]==c)map[x][p][0]=0;
				}
			}

					

int main(){
	return 0;
}

