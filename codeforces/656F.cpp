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
LL gcd(LL a,LL b){return b?gcd(b,a%b):a;}
LL lcm(LL a,LL b){return a/gcd(a,b)*b;}
#define REP(i,begin,end) for(int (i)=(begin);(i)<(end);(i)++)
int main(){
	char c;
	int ans=0;
	while(cin>>c){
		if(c=='A')ans++;
		if(c>='2' && c<='9')ans+=c-'0';
		if(c=='1'){
			cin>>c;
			ans+=10;
		}
	}
	cout<<ans;
	return 0;
}

//This problem was contributed by kit1980.

//One of the most common tricks in April Fool's day contests is OEIS lookup. Most statement-less problems can be solved by thoroughly searching the website. In this problem, you were given OEIS sequence numbers, and if you checked them on the website, you could notice that the answer is the first element of the given sequence. Now it's just a matter of encoding this lookup process, given that Codeforces doesn't allow solutions to visit external websites...

//Ok, it's about time to shout "April Fool!" and burst into laughter. Forget about OEIS. This problem was carefully forged to look very much like what I've described (and I hope it did!), but the actual solution is much, much simpler. The input represents a hand of cards in a game of blackjack, and you have to calculate the sum of points for it. A stands for Ace, worth 1 point (the minimal sum of the 6 digits part of the hand is 12, so if Ace is counted as 11, you're guaranteed to go bust), digits 2..9 correspond to matching cards, and pair of digits 10 represents, well, a ten. The reference to "validity" in the statement meant that 1 or 0 will never appear alone, but will always form a valid card.
