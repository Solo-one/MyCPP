// Copyright (c) 2018 Baidu.com, Inc. All Rights Reserved
// File Name: hello.cpp
// Author: fangxiaoming01@baidu.com 
// Created Time: Thu 14 Jun 2018 11:13:32 AM CST

#include<iostream>
using namespace std;

int incr(int& val) {
    return ++val;
}

int main(int argc, char* argv[]) {
    short v1 = 0;
    int v11 = 0;
    const int v2 = 42;
    int v3 = incr(v11);
    //v3 = incr(v2);
    //v3 = incr(0);
    //int v4 = incr(v1 + v2);
    int v4 = v1 + v2;
    v4 = incr(v4);
    cout << v4 << endl; 
    return 0;
}
