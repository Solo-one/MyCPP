// Copyright (c) 2018 Baidu.com, Inc. All Rights Reserved
// File Name: string.cpp
// Author: fangxiaoming01@baidu.com
// Created Time: Wed 21 Mar 2018 11:06:56 AM CST

#include<iostream>
#include<string>
using namespace std;

int main() {
	string line;
	//while (getline(cin, line)) { // getline() 返回丢弃换行符
	//	cout << line << endl;
	//}
	getline(cin, line);
	bool tf = line.empty();
	if (tf) {
		cout << "输入是空值" << endl;
	} else {
		//int size = line.size(); 最好不要使用 int 类型接收返回值
		string::size_type size = line.size(); // size_type 接收
		cout << "字符串长度: " << size << endl;
		cout << "字符串长度: " << line.size() << endl;
	}

	string s1 = "hello";
	string s2 = "world";
	string s3 = s1 + ", "; // ok
	//string s4 = "hello " + ", "; // error
	string s5 = s1 + ", " + " world"; // ok
	//string s6 = "hello" + ", " + s2; // error

	string str("this is a map");
	for (string::size_type ix = 0; ix != str.size(); ++ix)
		cout << ix << "::" <<str[ix] << endl;

	return 0;
}
