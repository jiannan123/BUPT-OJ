#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n-- > 0)
	{
		int minute;
		int h1,m1,h2,m2;
		string hour1,minute1,hour2,minute2;
		getline(cin,hour1,':');
		h1 = atoi(hour1.c_str());
		getline(cin,minute1,'\n');
		m1 = atoi(minute1.c_str());
		
		getline(cin,hour2,':');
		h2 = atoi(hour2.c_str());
		getline(cin,minute2,'\n');
		m2 = atoi(minute2.c_str());
		
		if(h1 <= h2)
			minute = (h2 - h1) * 60 - m1 + m2;
		else
			minute = 24 * 60 - (h1 - h2) * 60 - m1 + m2;
		cout << minute;
	}
}
