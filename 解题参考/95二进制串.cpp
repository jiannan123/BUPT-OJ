/*
采用栈来存储取余的结果，将取余的结果再从栈中弹出时即可得到结果 
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
