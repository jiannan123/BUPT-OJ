/*
���������ʱ����Ҫע����һ����ʱ�����������������еĽ�� 
*/
#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int a[15][15],n,m1,m2;
	scanf("%d",&n);
	while(n-- > 0)
	{
		int i,j,k,s,tmp[15][15],res[15][15];
		cin >> m1 >> m2;
		for(i = 0; i < m1; ++i)
			for(j = 0; j < m1; ++j)
			{
				cin >> a[i][j];
				tmp[i][j] = a[i][j];
			} 
		for(k = 1; k < m2; ++k)  //�����ݵĴ��� 
		{
			for(i = 0; i < m1; ++i)
				for(j = 0; j < m1; ++j)
				{
					int temp = 0;
					for(s = 0; s < m1; ++s)
						temp += a[i][s] * tmp[s][j];
					res[i][j] = temp;
				}
			for(i = 0; i < m1; ++i)  //����ʱ����ٴθ��ظ�ԭ����������м��� 
				for(j = 0; j < m1; ++j)
					a[i][j] = res[i][j];
		}
			
		for(i = 0; i < m1; ++i)
		{
			for(j = 0; j < m1 - 1; ++j)
				cout << a[i][j] << ' ';
			cout << a[i][j] << '\n';
		}
			
	}
	
} 
