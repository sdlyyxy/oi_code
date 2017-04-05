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
	char s[20];
	sprintf(s,"%o",a);
	int ans=0;
	REP(i,0,strlen(s)){
		if(s[i]=='1')ans++;
	}
	cout<<ans<<endl;
	return 0;
}
//
//Each paragraph of the statement is a short program in one of esoteric languages. If you recognize each one, find an interpreter for it and execute the program, you'll get a piece of statement. Put them together to find out what is it that you need to do to solve the actual problem:

    //Print number (Brainfuck) ！ http://ideone.com
    //of ones in (Malbolge) ！ http://www.malbolge.doleczek.pl/
    //base 8 (Piet) ！ http://www.rapapaing.com/blog/?page_id=6
    //notation of a (Befunge) ！ http://www.quirkster.com/iano/js/befunge.html
