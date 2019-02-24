#include<iostream>
#include<cstdio>
#include<stdlib.h>
using namespace std;

struct node {
	int value;
	struct node * lchild;
	struct node * rchild;
};
node *insert(node *T,node * pre,int x)
{
	if(T == NULL)
	{
		T->value = x;
		T->lchild = T->rchild = NULL;
		cout << pre->value <<'\n';
		return T;
	}
	else if(x < T->value)
		T->lchild = insert(T->lchild,T,x);
	else if(x > T->value)
		T->rchild = insert(T->rchild,T,x);
	return T;
}
int main() {
	int n,val,pos = 0;
	cin >> n;
	node *T = NULL,*pre = NULL,*root;
	pre = (node *)malloc(sizeof(node));
	pre->value = -1;
	while(n-- > 0) 
	{
		scanf("%d",&val);
		T = insert(T,pre,val);
	}

}
