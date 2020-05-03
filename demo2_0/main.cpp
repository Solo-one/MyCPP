// Copyright (c) 2020 Baidu.com, Inc. All Rights Reserved
// File Name: main.cpp
// Author: fangxiaoming01@baidu.com 
// Created Time: Tue 10 Mar 2020 03:28:11 PM CST

#include <iostream>
using namespace std;

void test1(const char* test) {
    cout << test << endl;

    


    return;
}

int main(int argc, char** argv) {
    
    cout << "Hello World!" << endl;

    const char* test = "abcdeffghi";
    cout << test << endl;

    test1(test);

    return 0;
}
