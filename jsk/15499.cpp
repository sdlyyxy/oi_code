#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
bool b[20][20];
void print(){
	for(int i=0;i<7;i++){
		for(int j=0;j<7;j++)cout<<(b[i][j]?1:0)<<' ';
		cout<<endl;
	}
}
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		int u,v;
		cin>>u>>v;
		///cout<<u<<' '<<v<<endl;
		//cout<<u+3<<' '<<v+3<<endl;
		b[u+3][v+3]=true;
		//cout<<b[2][3];
		//print();
	}
	//print();
	int ans=0;
	for(int i=-3;i<=3;i++){
		if(!i)continue;
		if(b[i+3][3]&&b[i+3][3-abs(i)]&&b[i+3][3+abs(i)])ans++;
	}
	for(int i=-3;i<=3;i++){
		if(!i)continue;
		if(b[3][i+3]&&b[3-abs(i)][i+3]&&b[3+abs(i)][i+3])ans++;
	}
	if(b[3][0]&&b[3][1]&&b[3][2])ans++;
	if(b[3][4]&&b[3][5]&&b[3][6])ans++;
	if(b[0][3]&&b[1][3]&&b[2][3])ans++;
	if(b[4][3]&&b[5][3]&&b[6][3])ans++;

	cout<<ans;
	return 0;
}
