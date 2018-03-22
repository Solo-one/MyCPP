// Copyright (c) 2018 Baidu.com, Inc. All Rights Reserved
// File Name: arrayp.cpp
// Author: fangxiaoming01@baidu.com
// Created Time: Thu 22 Mar 2018 04:33:25 PM CST

#include<iostream>
using namespace std;

int main() {
	int ia[] = {0, 2, 4, 6, 10};
	int *pi = ia;

	cout << ia << ":::" << &ia << endl;
	cout << ia[0] << ":::" << &ia[0] << endl;
	cout << ia[1] << ":::" << &ia[1] << endl;
	cout << pi << endl;
	cout << *pi << endl;

	pi = &ia[2];
	//cout << pi << ":::" << *pi << ":::" << *(pi++) << endl;
	cout << pi << ":::" << *pi << endl;
	pi++;
	cout << *pi << endl;

	//
	int *a = ia;
	int *b = a + 2;
	ptrdiff_t n = b - a; // 指针相减
	cout << n << endl;

	//
	int *pp = &ia[1];
	//int j = pp[-1];
	int j = pp[1];
	cout << j << endl;
	return 0;
}
