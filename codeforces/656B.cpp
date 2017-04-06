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
using namespace std;
typedef long long LL;
#define REP(i,begin,end) for(int (i)=(begin);(i)<(end);(i)++)
LL gcd(LL a,LL b){return b?gcd(b,a%b):a;}
LL lcm(LL a,LL b){return a/gcd(a,b)*b;}
int M[20],R[20];
int main(){
	int n,mylcm=1;
	cin>>n;
	REP(i,0,n){
		cin>>M[i];
		mylcm=lcm(mylcm,M[i]);
	}
	REP(i,0,n)cin>>R[i];
	//puts("hehe");
	int can=0;
	REP(i,0,mylcm){
		REP(j,0,n)
			if(i%M[j]==R[j]){
				can++;
				break;
			}
	}
	cout<<(can+.0)/mylcm;
	return 0;
}

///Just one word: typoglycemia. The urban legend (unsupported by any known research) claims that people can easily read text even if letters in each word are scrambled, as long as the first and the last letters stay in place. Looked like a fun thing to verify on a small (and strongly biased) sample of competitive programmers. Judging from the results, it's really not much of an obstacle :-)

//When un-scrambled, the lengthy statement becomes a story about two roommates who are trying to figure out a fair way to split dishes washing duty. (Fun fact: this problem idea is actually inspired not by any real-life events but by a theater play.) "You agree on two arrays of integers M and R, number upcoming days (including the current one) with successive integers (the current day is zero), and you wash the dishes on day N if and only if there exists an index i such that N % M[i] = R[i], otherwise your roommate does it... Calculate the percentage of days on which you end up doing the washing."

//To find the answer, you can find least common multiple of numbers in array M. The infinite number of days ahead can be split into identical blocks of M days, so the percentage of all days on which you end up with the chore will be the same as the percentage of the first LCM days. Iterate over days 0..LCM-1 and for each day check who gets to do the chore on it (since each element is at most 16, LCM will be at most 720720, and iteration will be sufficiently fast).

//A much simpler approach would be just to iterate over a lot of days regardless of LCM and calculate the answer based on them ¡ª the absolute error will be small enough for this solution to pass.
