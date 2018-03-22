// Copyright (c) 2018 Baidu.com, Inc. All Rights Reserved
// File Name: array1p.cpp
// Author: fangxiaoming01@baidu.com
// Created Time: Thu 22 Mar 2018 05:15:15 PM CST

#include<iostream>
using namespace std;

int main() {
	const size_t size = 5;
	int int_arr[size] = {1,2,3,4,5};
	for (int *pbegin = int_arr, *pend = int_arr + size;
			pbegin != pend; ++pbegin) {
		cout << *pbegin << endl;
	}
	return 0;
}
