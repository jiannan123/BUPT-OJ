/*
用结构数组来保存每个目录，每个目录中的文件用结构中的vec数组来保存，count表示当前目录中有多少个文件
father表示当前目录在哪一个目录之下，查找目录时进行结构数组的遍历即可实现 
*/ 
#include<iostream>
#include<stdio.h>
#include<vector>
#include<string.h>
using namespace std;

struct file {
	string name;
	string father;
	string vec[50];
	int count;
} buff[1000];
void createfile(char a[],char b[],int Num) {
	string fileName = a;
	for(int i = 0; i <= Num; ++i)
		if(buff[i].name == b)
		{
			buff[i].vec[buff[i].count] = fileName;
			buff[i].count++;
		}
			
}
void createdir(char a[],char b[],int Num) {
	string fileName = a;
	buff[Num + 1].name = a;
	buff[Num + 1].father = b;

}
void listfile(char a[],int Num) {
	for(int i = 0; i <= Num; ++i)
		if(buff[i].name == a)
			for(int j = 0; j < buff[i].count; j++)
				cout << buff[i].vec[j] <<'\n';
}
void listdir(char a[],int Num) {
	for(int i = 0; i <= Num; ++i)
		if(buff[i].father == a)
			cout << buff[i].name << '\n';
}
int main() {
	int num = 0,m,n;
	cin >> n;
	while(n-- > 0) {
		cin >> m;
		for(int i = 0; i < 1000; ++i)
		{
			buff[i].father = "";
			buff[i].name = "";
			buff[i].count = 0;
		}
		num = 0;
		buff[0].name = "root";
		while(m-- > 0) {
			char action[50],tmp1[200],tmp2[200];
			scanf("%s",action);
			if(strcmp(action,"CREATEFILE") == 0) {
				scanf("%s %s",tmp1,tmp2);
				createfile(tmp1,tmp2,num);
			} else if(strcmp(action,"CREATEDIR") == 0) {
				scanf("%s %s",tmp1,tmp2);
				createdir(tmp1,tmp2,num);
				num++;
			} else if(strcmp(action,"LISTFILE") == 0) {
				scanf("%s",tmp1);
				listfile(tmp1,num);
			} else {
				scanf("%s",tmp1);
				listdir(tmp1,num);
			}
		}
	}

}

