// p.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int main()
{
	int *p;
	int i;
	int n;
	cin >> n;
	p = new int[n];
	p = new int[20];
	for (i = 0; i < n; i++)
		p[i] = i * i;
	for (i = 0; i < n; i++)
		cout << *(p + i) << " " << p[i] << endl;
	delete[]p;
    return 0;
}

