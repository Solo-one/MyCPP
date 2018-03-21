// Copyright (c) 2018 Baidu.com, Inc. All Rights Reserved
// File Name: main.cpp
// Author: fangxiaoming01@baidu.com
// Created Time: Tue 20 Mar 2018 05:48:13 PM CST

#include<iostream>
using namespace std;

int main() {
	std::cout << "Hello World!" << std::endl;
	int i = 42;
	// const int & r = 42;
	// int & r = 42;
	int & r = i;
	int rs = r;
	int * rss = &rs;
	std::cout << r << std::endl;
	std::cout << &r << std::endl;
	std::cout << rs << std::endl;
	std::cout << &rs << std::endl;
	std::cout << rss << std::endl;
	std::cout << *rss << std::endl;

	// 引用的理解
	double dval = 3.14;
	double & ri = dval;
	// double ri = dval;
	std::cout << &dval << std::endl;
	std::cout << &ri << std::endl;

	double dvar = 3.1415;
	const int &dri = dvar; // int temp = dvar;
	std::cout << &dvar << std::endl;
	std::cout << dri << std::endl;
	std::cout << &dri << std::endl;

	return 0;
}
