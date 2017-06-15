#include<cstdio>
#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int a[1010],b[1010];
int main(){
	        int n;cin>>n;
			        for(int i=0;i<n;i++)cin>>a[i];
					        int m;cin>>m;
							        for(int i=0;i<=m-n;i++)cin>>b[i];
									        int ans=INT_MAX;
											        for(int i=0;i<m-n;i++){
														                int tmp=0;
																		                for(int j=0;j<n;j++)tmp+=(a[j]-b[(i+j)%m])*(a[j]-b[(i+j)%m]);
																						                ans=min(ans,tmp);
																										        }
													        cout<<ans;
															        return 0;
}

