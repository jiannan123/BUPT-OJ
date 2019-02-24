#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
	int m,n,i,a[1500];
	cin >> n;
	while(n-- > 0)
	{
		cin >> m;
		for(i = 0; i < m; ++i)
			cin >> a[i];
		sort(a,a + m);
		cout << a[m - 1] << ' ';
		for(i = m - 2; i >= 0 ; --i)
			if(a[i] != a[m - 1])
			{
				cout << a[i] <<'\n';
				break;
			}
	}
}
