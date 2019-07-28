// Copyright (c) 2018 Baidu.com, Inc. All Rights Reserved
// File Name: main.cpp
// Author: fangxiaoming01@baidu.com 
// Created Time: Wed 13 Jun 2018 08:18:03 PM CST

#include<iostream>
using namespace std;

void reset(const int *pr);

int main(int argc, char* argv[]) {
    if (-1) {
        cout << "ture" << endl;
    }

    int i = 40;
    int *pr = &i;
    cout << i << "::" << pr << "::" << *pr <<endl;
    reset(pr);
    cout << i << "²âÊÔ::" << pr << "::" << *pr <<endl;

    return 0;
}

void reset(const int *ip) {
    //*ip = 0;
    cout << ip << endl;
    ip = 0;
}
