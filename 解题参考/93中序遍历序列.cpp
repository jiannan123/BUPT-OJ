/*
�жϸ������Ƿ�Ϊһ�Ŷ�������������������ʱ��ֻ���жϸ������Ƿ�������������� 
*/

#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int m,n,a[500],b[500];
	cin >> n;
	while(n-- > 0)
	{
		cin >> m;
		int i;
		for(i = 0; i < m; ++i)
		{
			cin >> a[i];
			b[i] = a[i];
		}
		sort(a,a + m);
		int tag = 1;
		for(i = 0; i < m; ++i)
		{
			if(a[i] != b[i])
			{
				tag = 0;
				break;
			}		
		}
		if(tag == 1)
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}
