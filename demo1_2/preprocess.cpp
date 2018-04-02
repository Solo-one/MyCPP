// Copyright (c) 2018 Baidu.com, Inc. All Rights Reserved
// File Name: preprocess.cpp
// Author: fangxiaoming01@baidu.com
// Created Time: Mon 02 Apr 2018 11:19:31 AM CST

#include<iostream>
using namespace std;

#define FILENAME  __FILE__
#define ASSE  __LINE__
int main() {
	#ifndef NDEBUG
	cerr << "Starting main" << endl;
	#endif
	cout << FILENAME << endl;
	cout << ASSE << __TIME__ << __DATE__ << endl;
	return 0;
}
