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
const int a[]={8,-1,-1,3,6,9,4,7,0,5};
int main(){
	int x[20];
	char c;
	int l=0;
	while(isdigit(c=getchar()))x[l++]=c-'0';
	bool can=1;
	REP(i,0,l)if(a[x[i]]!=x[l-i-1])can=0;
	if(l&1)
		if(x[l/2]!=3 && x[l/2]!=7)can=0;
	puts(can?"Yes":"No");
	return 0;
}
//How can a palindrome be "touchy"? You have to write the number in Braille font and check whether the resulting notation is a palindrome. In Braille digits 3 and 7 stay themselves when mirrored, digits 4-6, 5-9 and 8-0 become each other, and 1 and 2 stop being digits.
//Braille code for 0-9
// *- *- ** ** *- ** ** *- -* -*
// -- *- -- -* -* *- ** ** *- **
// -- -- -- -- -- -- -- -- -- --
// 1  2  3  4  5  6  7  8  9  0
