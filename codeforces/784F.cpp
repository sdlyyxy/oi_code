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
int main(){
/*	REP(i,0,10000)
		REP(j,0,20000){
			int c=i*j+1;
		}
This not work... maybe it is optimized..
*/
	int n;
	cin>>n;
	int a[20];
	REP(i,0,n)cin>>a[i];
	//sort(a,a+n);
	srand(time(NULL));
	REP(k,0,10000){
		int x=rand()%n;
		int y=rand()%n;
		int xx=min(x,y);
		int yy=max(x,y);
		x=xx;
		y=yy;
		if(a[x]>a[y])swap(a[x],a[y]);
	}
//Accepted when use REP(k,0,40000000),1341ms
	REP(i,0,n)cout<<a[i]<<' ';
	return 0;
}
//Checker verdict "Results unsatisfactory, try harder" combined with the problem title was supposed to hint that the program must show how hard it is to solve the task, i.e. not to output the result immediately :-) The submission was accepted if it spent at least a second on each test.
