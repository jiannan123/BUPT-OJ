/*
注：此题中构建二叉树是按照从顶到下的顺序的，否则这样是不正确的 
*/
#include<stdio.h>
typedef struct tree {
	int lchild,rchild,deep;
} Tree;
int main() {
	int t;
	Tree tree[101];
	while(~scanf("%d",&t)) {
		int i,j,k;
		for(i=1; i<=t; i++) {
			int n,m;
			scanf("%d%d",&n,&m);
			for(j=1; j<=m; j++) {
				tree[j].deep=0;
				tree[j].lchild=-1;
				tree[j].rchild=-1;
			}
			tree[1].deep=1;
			int Mdeep=0;
			for(j=1; j<=n; j++) {
				int a,b;
				scanf("%d%d",&a,&b);
				if(tree[b].lchild==-1)
					tree[b].lchild=a;
				else
					tree[b].rchild=a;
				tree[a].deep=tree[b].deep+1;
				if(tree[a].deep>Mdeep) Mdeep=tree[a].deep;
			}
			printf("Q%d:\n",i);
			int flag;
			for(k=1; k<=Mdeep; k++) {
				flag=0;
				for(j=1; j<=m; j++) {
					if(flag&&tree[j].deep==k) printf(" ");
					if(tree[j].deep==k) {
						flag=1;
						printf("%d",j);
					}
				}
				printf("\n");
			}
		}
	}
	return 0;

}
