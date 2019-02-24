#include<iostream>
#include<stdio.h>
using namespace std;
struct node {
	int value;
	struct node * lchild;
	struct node * rchild;
	struct node * father;
	int level;
};
int main(){
	int t;
	cin >> t;
	while(t-- > 0)
	{
		int n,m,a,b,i,j,exsit[101];
		scanf("%d %d",&n,&m);
		for(i = 1; i <=m; ++i)
			exsit[i] = 0;
		for(i = 0; i < n; ++i)
		{
			scanf("%d %d",&a,&b);
			if(exsit[b] == 0)
			{
				
			}
		}
	}
}
