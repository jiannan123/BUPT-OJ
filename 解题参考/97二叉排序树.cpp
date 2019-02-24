#include<iostream>
#include<cstdio>
#include<stdlib.h>
using namespace std;

struct node {
	int value;
	struct node * lchild;
	struct node * rchild;
};

int main() {
	int n,val,loc = 0,tag = -1;
	cin >> n;
	node *T = NULL,*pre = NULL,*root = NULL;
	pre = (node *)malloc(sizeof(node));
	pre->value = -1;
	while(n-- > 0) 
	{
		T = root;
		cin >> val;
		while(T)
		{
			pre = T;
			if(val < T->value)
			{
				T = T->lchild;
				tag = 1;
			}
				
			else
			{
				T = T->rchild;
				tag = 0;
			}
				
		}
		T = (node *)malloc(sizeof(node));
		T->value = val;
		T->lchild = T->rchild = NULL;
		if(tag == 1)
			pre->lchild = T;
		if(tag == 0)
			pre->rchild = T;
		if(loc == 0)
			root = T;
		loc++;
		cout << pre->value <<'\n';
	}

}
