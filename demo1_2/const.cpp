// Copyright (c) 2018 Baidu.com, Inc. All Rights Reserved
// File Name: const.cpp
// Author: fangxiaoming01@baidu.com
// Created Time: Thu 22 Mar 2018 05:27:27 PM CST

#include<iostream>
#include<string>
using namespace std;

int main() {
	// ********** const 对象指针 ************ //
	const double *cptro;
	double num = 3.8;
	//*icptr = 42; // error
	cptro = &num;
	cout << *cptro << endl;

	const double pi = 3.1415;
	//double *ptr = &pi; // error
	const double *ptr = &pi; // 必须const 修饰
	cout << *ptr << endl;

	const int universe = 42;
	const void* cpv = &universe; // 必须const 修饰
	//void* pv = &universe;
	//

	// ************* const 指针 **************//
	int errnum = 0;
	int * const errpt = &errnum;
	int other = 10;
	//errpt = &other; // error
	*errpt = other;
	cout << *errpt << endl;

	// ************* 指向const对象的 const 指针 *********** //
	const double my = 99999;
	const double * const const_ptr = &my;
	double tmp = 3.9;
	//*const_ptr = tmp; error
	//const_ptr = &tmp; error
	cout << const_ptr << endl;
	cout << *const_ptr << endl;

	typedef string *pstring;
	const pstring cstr; // string * const cstr;

	return 0;
}
