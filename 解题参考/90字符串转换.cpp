/*
���ñ���ö�ٵķ������ɽ�����⣬�ȼ����26����ĸ֮���໥ת���Ļ��ѣ�������һ����ά�����С�
����������Ĺ����У�����ÿ�����ݣ��ֱ����ȫ��ת��Ϊa-z�Ļ��ѣ�ѡ�����е���Сֵ����Ϊ����
����С���� 

*/
#include<iostream>
#include<algorithm>
#include<string.h>
#include<math.h>
using namespace std;

#define min(a,b) a < b ? a : b
int main(){
	char str[1001];
	int cost[27][27],alpha[27],n,i,j;
	for(i = 1; i < 27; ++i)
		for(j = 1; j < 27; ++j)
			cost[i][j] = min(fabs(j - i),26 - fabs(j - i));
	cin >> n;
	while(n-- > 0)
	{
		cin >> str;
		int tmp = 9999999,ans;
		for(i = 1; i < 27; ++i)
		{
			ans = 0;
			for(j = 0; str[j]; ++j)
				ans += cost[i][str[j] - 'a' + 1];
			tmp = min(tmp,ans);
		}
		cout << tmp << '\n';
			
	}
}
