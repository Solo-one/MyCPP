// Copyright (c) 2018 Baidu.com, Inc. All Rights Reserved
// File Name: main.cpp
// Author: fangxiaoming01@baidu.com 
// Created Time: Fri 11 May 2018 08:11:42 PM CST

#include<iostream>
#include "gtest/gtest.h"
using namespace std;

int func(int a) {
    return a + 1;
}

class IsEvenTest : public ::testing::Test {
    void SetUp() {
        cout << "Setting up" << endl;
        shared_data = new char[10];
    }

    void TearDown() {
        cout << "Tearing down" << endl;
        delete shared_data;
    }
protected:
    static void SetUpTestCase() {
        cout << "Setting up test case" << endl;
        shared_data_full = new char[12];
        num = 15;
    }

    static void TearDownTestCase() {
        cout << "Tearing down test case" << endl;
        delete shared_data_full;
    }   
private:
    char *shared_data;
    static char *shared_data_full; // 静态成员不受访问修饰符影响
public:
    static int num;
};

TEST(FunTest, HandlesZeroInput) {
    EXPECT_EQ(2, func(1));
}

TEST(test1, num) {
    ASSERT_EQ(1, 1);
    EXPECT_NE(1, 3);
}

TEST(test2, num) {
    ASSERT_GE(3, 2);
    ASSERT_GT(3, 1);
}

TEST_F(IsEvenTest, SmallIntTest) {
    cout << "SmallIntTest" << endl;
    EXPECT_EQ(2, func(1));
}

TEST_F(IsEvenTest, LargeIntTest) {
    cout << "LargeIntTest" << endl;
    EXPECT_NE(1, func(1));
}

char *IsEvenTest::shared_data_full = ""; // 静态成员初始化
int IsEvenTest::num = 10;

int main(int argc, char *argv[]) {
    //int IsEvenTest::num = 10;

    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
