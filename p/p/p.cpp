// p.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int main()
{
	int *p;
	int i;
	p = new int[20];
	for (i = 0; i < 20; i++)
		p[i] = i * i;
	for (i = 0; i < 20; i++)
		cout << p[i] << endl;
    return 0;
}

