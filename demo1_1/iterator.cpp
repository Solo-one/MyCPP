// Copyright (c) 2018 Baidu.com, Inc. All Rights Reserved
// File Name: iterator.cpp
// Author: fangxiaoming01@baidu.com
// Created Time: Wed 21 Mar 2018 01:45:02 PM CST

#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<int> ivec(10);
	for (vector<int>::size_type ix = 0; ix != ivec.size(); ++ix)
		ivec[ix] = ix;

	for (vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter)
		cout << *iter << endl;

	for (vector<int>::const_iterator iter = ivec.begin(); iter != ivec.end(); ++iter) {
		cout << *iter << endl; // const_iterator 只能读取
		// *iter = 8; // 错误
	}

	vector<int> nums(10);
	const vector<int>::iterator cit = nums.begin();
	*cit = 99;
	//++cit; // error
	//for (cit; cit != cit.end(); ++cit) {
	//
	//}

	return 0;
}
