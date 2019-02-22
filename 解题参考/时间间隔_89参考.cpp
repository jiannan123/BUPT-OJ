#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int t;
	int h1,h2,m1,m2;
	int time1,time2,dif;
	scanf("%d",&t);
	while (t--) {
		//input && initiate
		scanf("%d:%d",&h1,&m1);
		scanf("%d:%d",&h2,&m2);
		//cal
		time1=h1*60+m1;
		time2=h2*60+m2;
		if (time1<=time2)
			dif=time2-time1;
		else
			dif=24*60-(time1-time2);
		//output
		printf("%d\n",dif);
	}

	return true;
}

