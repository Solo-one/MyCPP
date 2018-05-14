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

int main(int argc, char *argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
