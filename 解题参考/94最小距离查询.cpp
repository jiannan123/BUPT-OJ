/*
使用C++中的set，将同一字母出现的位置全部保存起来，在输入的过程中进行处理，通过此次处理之后，set中同一字母的出现位置，
会按照升序的方式进行排列（set默认的存储方式）这样可以大大减少后期每一次查询对于字符串的遍历，相当于一次遍历解决问题 
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
		set<int> pos[26];  //保存每个字母出现过的位置集合 
		
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
