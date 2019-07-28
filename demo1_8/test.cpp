// Copyright (c) 2018 Baidu.com, Inc. All Rights Reserved
// File Name: test.cpp
// Author: fangxiaoming01@baidu.com 
// Created Time: Wed 04 Jul 2018 02:46:22 PM CST

#include<iostream>
using namespace std;

#define DISALLOW_COPY_AND_ASSIGN(TypeName) \
    TypeName(const TypeName&); \
    TypeName& operator = (const TypeName&)

class Foo {
public:
    explicit Foo(int f);
    ~Foo();
private:
    DISALLOW_COPY_AND_ASSIGN(Foo);
};

Foo::Foo(int f) {
    cout << "���캯�� Foo()" << f << endl;
}

Foo::~Foo() {
    cout << "�������� ~Foo()" << endl;
}

int main() {
    Foo f(10);

    return 0;
}
