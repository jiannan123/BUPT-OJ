/*
采用暴力枚举的方法即可解决问题，先计算出26个字母之间相互转换的花费，保存在一个二维数组中。
接下来处理的过程中，对于每组数据，分别计算全部转换为a-z的花费，选择其中的最小值，即为所需
的最小花费 

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
