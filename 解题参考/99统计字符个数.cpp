#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int n;
	char a;
	string s;
	cin >> n; 
	while(n-- > 0)
	{
		int ans = 0;
		cin >> a;
		cin >> s;
		for(int i = 0; i < s.length(); ++i)
			if(s[i] == a)
				ans++;
		cout << ans << '\n';
	}
}
