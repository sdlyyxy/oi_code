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
void print(int a[]){
	REP(i,0,3)printf("%d ",a[i]);
	puts("");
}
int main(){
	int a[3]={4,2,6};
	nth_element(a,a+0,a+3);
	print(a);
	//while(previous_permutation(a,a+3))print(a);
	return 0;
}


