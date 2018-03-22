// Copyright (c) 2018 Baidu.com, Inc. All Rights Reserved
// File Name: pointer.cpp
// Author: fangxiaoming01@baidu.com
// Created Time: Thu 22 Mar 2018 03:18:01 PM CST

#include<iostream>
using namespace std;

int main() {
	int ival;
	int zero = 0;
	const int c_ival = 0;
	//int *pi = zero; // error
	int *pi = c_ival;
	pi = 0;

	/*
	 * void* 指针
	 * 1.与另一指针比较；
	 * 2.向函数传递void*指针，或函数返回void*指针；
	 * 3.给另一个void*指针赋值；
	 * 4.不允许使用void*指针操纵它指向的对象。
	 */
	double obj = 3.14;
	double *pd = &obj;
	void* pv = &obj;
	pv = pd;

	int num = 1024;
	int *pointer = &num;
	cout << pointer << endl;
	int **ppi = &pointer;
	cout << *ppi << endl;
	cout << ppi << endl;
	int *pi2 = *ppi;
	cout << pi2 << endl;
	cout << *pi2 << endl;
	cout << **ppi << endl;

	return 0;
}
