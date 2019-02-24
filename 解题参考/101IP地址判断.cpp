/*
注意此题要注意到的几种情况：① 两个.练到一块；②数字的取值范围； ③要有4个数字，3个点 
*/
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n-- > 0)
	{
		char a[50];
		cin >> a;
		int len = strlen(a);
		if(len < 1)
			cout << "No\n"; 
		else
		{
			int i,tag = 1,count = 0,res = 0,num = 0;
			for(i = 0; i < len; ++i)
			{
				if(a[i] != '.')
				{
					if(a[i] <= '9' && a[i] >= '0')
						res = res * 10 + a[i] - '0';
					else
					{
						tag = 0;
						break;
					}
					if(i == len - 1)
					{
						num++;
						if(!(res >= 0 && res <= 255))
						{
							tag = 0;
							break;
						}
					}
				}
				else
				{
					if(!(res >= 0 && res <= 255))
					{
						tag = 0;
						break;
					}
					if((i > 0 && a[i - 1] == '.') || (i == 0 && a[i + 1] == '.'))
					{
						tag = 0;
						break;
					}
					res = 0;
					num++;
					count++;
				}		
				
			}
			if(tag == 1 && count == 3 && num == 4)
				cout << "Yes\n";
			else
				cout << "No\n";
		}
	}
} 
