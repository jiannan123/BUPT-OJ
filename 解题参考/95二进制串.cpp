/*
����ջ���洢ȡ��Ľ������ȡ��Ľ���ٴ�ջ�е���ʱ���ɵõ���� 
*/
#include<iostream>
#include<cstdio>
#include<stack>
using namespace std;

int main(){
	int n,m;
	stack<int> stk;
	cin >> n;
	while(n-- >0)
	{
		cin >> m;
		while(m != 0)
		{
			stk.push(m % 2);
			m /= 2;
		}
		while(!stk.empty())
		{
			int ans = stk.top();
			cout << ans;
			stk.pop();
		}
		cout << '\n';
	}
} 
