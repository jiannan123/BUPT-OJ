/*
暴力列举比较即可 
*/
#include<iostream>
#include<stdio.h>
#include<map>
using namespace std;

struct tree{
	int father;  //保存该结点的父结点 
	int name;  //该结点的值 
	int count;  //该结点的度 
}buff[1001];

int main(){
	int m,n,i,j;
	map<int, int> mp;
	cin >> n;
	while(n-- > 0)
	{
		int x,y,num = 1;
		for(i = 1; i < 1001; ++i)
		{
			buff[i].count = 0;
			buff[i].father = -1;
			buff[i].name = -1;
		}
		cin >> m;
		for(i = 1; i < m; ++i)
		{
			cin >> x >> y;
			//cout << mp[x] << '\n';
			if(!mp[x]){
				mp[x] = num++;
				//cout << mp[x] <<'\n';
			}
			buff[mp[x]].count++;
			buff[mp[x]].name = x;
			//cout << mp[y] << '\n';
			if(!mp[y]){
				mp[y] = num++;
				//cout << mp[y] <<'\n';
			}
				
			buff[mp[y]].father = x;
			buff[mp[y]].name = y;
			buff[mp[y]].count++;
		}
		int tag,ans = 0;
		for(i = 1; i <= m; ++i)
		{
			tag = 1;
			for(j = 1; j <= m; ++j)
			{
				if(buff[j].father == buff[i].name && buff[j].count > buff[i].count)
				{
					tag = 0;
					break;
				}
					
				if(buff[i].father == buff[j].name && buff[i].count < buff[j].count)
				{
					tag = 0;
					break;
				}
			}
			if(tag == 1)
				ans++;			
		}
		cout << ans << '\n';		
	}
} 
