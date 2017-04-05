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
//#include<windows.h>
using namespace std;
#define REP(i,begin,end) for(int (i)=(begin);(i)<(end);i++)
const int maxn=100010;
const int maxm=50010;
int color[maxn],dep[maxn],pos[maxn],fposs[maxn],son[maxn],top[maxn],fa[maxn],size[maxn];
int lch[maxn*2],rch[maxn*2];
int num[11][maxn*2];
int tot,all;
int n;
struct TfinalAns{
	int num,len;
};
vector<int> to[maxn];
void dfs(int x){
	size[x]=1;
	REP(i,0,to[x].size()){
		int y=to[x][i];
		if(y!=fa[x]){
			fa[y]=x;
			dep[y]=x+1;
			dfs(y);
			if(size[y]>size[son[x]])son[x]=y;
			size[x]+=size[y];
		}
	}
}
void dfs2(int x,int tp){
	all++;
	pos[x]=all;
	fposs[all]=x;
	top[x]=tp;
	if(son[x]!=0)dfs2(son[x],tp);
	REP(i,0,to[x].size()){
		int y=to[x][i];
		if(y!=fa[x] && y!=son[x])dfs2(y,y);
	}
}
void build(int l,int r,int i){
	if(l==r){
		num[color[fposs[l]]][i]=1;
		return;
	}
	int mid=(l+r)>>1;
	tot++;
	lch[i]=tot;
	build(l,mid,lch[i]);
	tot++;
	rch[i]=tot;
	build(mid+1,r,rch[i]);
	REP(j,1,11)num[j][i]=num[j][lch[i]]+num[j][rch[i]];
}

void change(int p,int l,int r,int i,int d){
	if(l==r){
		REP(j,1,11)num[j][i]=0;
		num[d][i]=1;
		return;
	}
	int mid=(l+r)>>1;
	if(p<=mid)change(p,l,mid,lch[i],d);
	else change(p,mid+1,r,rch[i],d);
	REP(j,1,11)num[j][i]=num[j][lch[i]]+num[j][rch[i]];
}
int getNum(int co,int l,int r,int s,int t,int i){
	//printf("co=%dl=%dr=%ds=%dt=%di=%d\n",co,l,r,s,t,i);
	//system("pause");
	if(l<=s && r>=t){
		return num[co][i];
	}
	int mid=(s+t)>>1;
	if(l<=mid && r>mid){
		//puts("both search");
		int get1=getNum(co,l,r,s,mid,lch[i]);
		int get2=getNum(co,l,r,mid+1,t,rch[i]);
		return get1+get2;
	}
	if(l<=mid){
		//puts("left search");
		return getNum(co,l,r,s,mid,lch[i]);
		//puts("left search");
	}
	else {
		//puts("right search");
		return getNum(co,l,r,mid+1,t,rch[i]);
	}
}
int getLength(int l,int r){
	return r-l+1;
}
TfinalAns query(int a,int b,int co){
	int f1=top[a];
	int f2=top[b];
	bool flag=true;
	int numAns=0,lenAns=0;
	//puts("before while");
	while(f1!=f2){
		if(dep[f1]<dep[f2]){
			swap(f1,f2);
			swap(a,b);
			flag^=1;
		}
		//puts("before getnum");
		numAns+=getNum(co,pos[f1],pos[a],1,n,1);
		//puts("after getnum");
		lenAns+=getLength(pos[f1],pos[a]);
		a=fa[f1];
		f1=top[a];
	}
	//puts("after while");
	if(dep[a]<dep[b])swap(a,b);
	numAns+=getNum(co,pos[b],pos[a],1,n,1);
	lenAns+=getLength(pos[b],pos[a]);
	return (TfinalAns){numAns,lenAns};
}
int gcd(int a,int b){
	if(a==0||b==0)
	return b?gcd(b,a%b):a;
}
int main(){
	freopen("d:/in.txt","r",stdin);
	//freopen("d:/out.txt","w",stdout);
	int m;
	cin>>n>>m;
	REP(i,1,n+1)scanf("%d",&color[i]);
	REP(i,0,n-1){
		int u,v;
		scanf("%d%d\n",&u,&v);
		to[u].push_back(v);
		to[v].push_back(u);
	}
	dfs(1);
	//puts("dfs done");
	all=0;
	dfs2(1,1);
	//puts("dfs2 done");
	tot=1;
	build(1,n,1);
	//puts("build done");
	//REP(i,1,9)printf("pos[%d]=%d\n",i,pos[i]);
	REP(i,0,m){
		char s[20];
		int x,y;
		scanf("%s %d%d",s,&x,&y);
		if(s[0]=='A'){
			//puts("a");
			int z;
			scanf("%d\n",&z);
			TfinalAns finalAns=query(x,y,z);
			//puts("query done");
			if(!finalAns.num){
				//printf("%d %d\n",finalAns.num,finalAns.len);
				puts("0 1");
				continue;
			}
			int gcdd=gcd(finalAns.num,finalAns.len);
			printf("%d %d\n",finalAns.num/gcdd,finalAns.len/gcdd);
		}else{
			//puts("b");
			scanf("\n");
			change(pos[x],1,n,1,y);
		}
	}
	return 0;
}

