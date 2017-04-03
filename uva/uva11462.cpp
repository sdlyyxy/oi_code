#include<cstdio>
#include<iostream>
#include<cstring>
#include<cctype>
int a[200];
using namespace std;
inline int readint(){
	char c;
	while(!isdigit(c=getchar()));
	int x=0;
	while(isdigit(c)){
		x=x*10+c-'0';
		c=getchar();
	}
	return x;
}
int buf[10];
inline void writeint(int x){
	int p=0;
	do{
		buf[p++]=x%10;
		x/=10;
	}while(x);
	for(int i=p-1;i>=0;i--)putchar('0'+buf[i]);
}
int main(){
	int n;
	while(scanf("%d",&n) && n){
		memset(a,0,sizeof a);
		for(int i=0;i<n;i++){
//			int tmp;
//			scanf("%d",&tmp);
			a[readint()]++;
		}
		bool first=1;
		for(int i=0;i<110;i++){
			while(a[i]--){
//				if(!first)printf(" %d",i);
//				else printf("%d",i);
				if(!first)putchar(' ');
				writeint(i);
				first=0;
			}
		//十分神奇，行末不能有多余空格，否则PE
		}
		puts("");
	}
	return 0;
}
//use 260ms if scanf/printf, or 80ms using readint/writeint
