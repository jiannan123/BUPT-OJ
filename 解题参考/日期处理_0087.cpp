#include<iostream>
#include<string> 
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main(){
	int n;
	int date[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	cin >> n;
	while(n-- > 0)
	{
		//注意string字符串转化为数字的方法 
		string a,b,c;
		int day = 0,i;
		getline(cin,a,':');
		int a1 = atoi(a.c_str());
		getline(cin,b,':');
		int b1 = atoi(b.c_str());
		getline(cin,c,'\n');
		int c1 = atoi(c.c_str());
		for(i = 1; i < b1; ++i){
			day += date[i];
		}
		day += c1;	
		if(((a1 % 100 == 0 && a1 % 400 == 0) || (a1 % 100 != 0 && a1 % 4 == 0)) && b1 > 2)
			day++;
		cout << day << '\n';
	}
} 
