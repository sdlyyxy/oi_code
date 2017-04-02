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
#define rep(i,begin,end) for(int (i)=(begin);(i)<(end);i++)
int main(){
	int maxx=0;
	//initialize!!!
	int n;
	cin>>n;
	int last;
	rep(i,0,n){
		cin>>last;
		maxx=max(maxx,last);
	}
	cout<<(maxx^last);
	return 0;
}
//each line of the statement is a compilation/runtime error message in the truly april fools language intercal, which differ from the real ones in a single word. if you compare them with the real error messages, modifies words will spell the task: find xor of largest and last array elements.
//the mannul of intercal
//http://www.catb.org/~esr/intercal/ick.htm
