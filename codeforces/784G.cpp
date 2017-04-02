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
int bfout(int x){
	REP(i,1,48+x+1)putchar('+');
	putchar('.');
	REP(i,1,48+x+1)putchar('-');
	return 0;
}
int main(){
	freopen("d:/project/brainfuck/test.bf","w",stdout);
	freopen("d:/in.txt","r",stdin);
	int a;
	char c;
	int res;
	cin>>res;
	while(cin>>c){
		//cout<<"c="<<c<<endl;
		int sign;
		sign=(c=='+')?1:-1;
		//cout<<"sign="<<sign<<endl;
		cin>>a;
		//cout<<"a="<<a<<endl;
		res+=(sign*a);
	}
	//cout<<res<<endl;
	int outchar[4];
	int l=0;
	do{
		//l++;
		int out=res%10;
		outchar[l++]=out;
		//bfout(out);
		res/=10;
	}while(res);
	for(int i=l-1;i>=0;i--)bfout(outchar[i]);
	return 0;
}

