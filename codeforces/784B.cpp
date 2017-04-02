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
	int a;
	cin>>a;
	char s[30];
	sprintf(s,"%X",a);
	int ans=0;
	REP(i,0,strlen(s)){
		switch(s[i]){
			case '4':
			case '6':
			case '9':
			case '0':
			case 'A':
			case 'D':
				ans++;
				break;
			case '8':
			case 'B':
				ans+=2;
				break;
			default:
				break;
		}
	}
	cout<<ans;
	return 0;
}
//This problem is a variation on a kid's riddle in which you have to count closed loops in digits of the number ¡ª one in 4, 6, 9 and 0 and two in 8. Since we're programmers here, we had to count loops in digits in hexadecimal notation of the number (writing A..F in upper case).
