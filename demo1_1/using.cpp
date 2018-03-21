// Copyright (c) 2018 Baidu.com, Inc. All Rights Reserved
// File Name: using.cpp
// Author: fangxiaoming01@baidu.com
// Created Time: Wed 21 Mar 2018 10:49:47 AM CST

#include<iostream>
#include<string>
//using namespace std;
using std::cin;
using std::string;
using std::cout;
using std::endl;

int main() {
	string s;
	cin >> s;
	//cout << s;
	std::cout << s << std::endl;

	string word;
	while (cin >> word) {
		cout << word << endl;
	}

	return 0;
}
