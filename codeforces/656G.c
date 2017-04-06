#include<stdio.h>
int kitten[20];
int main(){
	int F,I,T;
	int i,j;
	scanf("%d%d%d\n",&F,&I,&T);
	for(i=0;i<F;i++){
		for(j=0;j<I;j++){
			char c;
			scanf("%c",&c);
			if(c=='Y')kitten[j]++;
		}
		scanf("\n");
	}
	int ans=0;
	for(i=0;i<I;i++)if(kitten[i]>=T)ans++;
	printf("%d",ans);
	return 0;
}
