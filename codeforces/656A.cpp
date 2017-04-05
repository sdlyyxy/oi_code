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
	long long a;
	cin>>a;
	if(a<13){
		cout<<(1LL<<a)<<endl;
	}else{
		cout<<(8092LL<<(a-13))<<endl;
	}
	return 0;
}
//This problem asked to figure out an integer sequence from two samples and problem title. It turned out to be surprisingly hard, a lot harder than I anticipated. A quick search through OEIS shows that while there are a lot of sequences which have these two numbers in them, only one is related to Leonardo da Vinci (and if you're looking for da Vinci, there are only two sequences overall). http://oeis.org/A221180 is an erroneous series of powers of 2, written down by da Vinci in his diaries and available as part of "Codex Madrid I".
