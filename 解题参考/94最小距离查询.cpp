/*
ʹ��C++�е�set����ͬһ��ĸ���ֵ�λ��ȫ������������������Ĺ����н��д���ͨ���˴δ���֮��set��ͬһ��ĸ�ĳ���λ�ã�
�ᰴ������ķ�ʽ�������У�setĬ�ϵĴ洢��ʽ���������Դ����ٺ���ÿһ�β�ѯ�����ַ����ı������൱��һ�α���������� 
*/
#include<cstdio> 
#include<iostream>
#include<string.h>
#include<cmath>
#include<set>
using namespace std;

int main(){
	int m,n;
	scanf("%d",&n);
	char a[100000]; 
	while(n-- > 0)
	{
		char b[10],tmp[50];
		int len,res;
		set<int> pos[26];  //����ÿ����ĸ���ֹ���λ�ü��� 
		
		scanf("%s",a);
		len = strlen(a);
		for(int i = 0; i < len; ++i)
			pos[a[i] - 'a'].insert(i);
		scanf("%d",&m);
		while(m-- > 0)
		{
			scanf("%s",tmp);
			if(strcmp(tmp,"INSERT") == 0)
			{
				scanf("%s",b);
				strcat(a,b);
				pos[b[0] - 'a'].insert(len);
				len++;
			}
			else
			{
				scanf("%d",&res);
				int ans = 999999,i;
				char ch = a[res];
				set<int>& top = pos[ch - 'a']; 
				set<int>::iterator it = top.find(res);
				if(it == top.end())
					ans = -1;
				else if(top.size() == 1)
					ans = -1;
				else
				{
					it++;
					if(it != top.end())
					{
						ans = *it - res; 
					}
					it--;
					if(it != top.begin())
					{
						it--;
						int tmp = res - *it;
						if(tmp < ans)
							ans = tmp;
					}
				}
				printf("%d\n",ans);
			} 
		}
		
	}
}
