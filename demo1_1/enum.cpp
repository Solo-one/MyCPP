// Copyright (c) 2018 Baidu.com, Inc. All Rights Reserved
// File Name: enum.cpp
// Author: fangxiaoming01@baidu.com
// Created Time: Tue 20 Mar 2018 07:39:03 PM CST

#include<iostream>
using namespace std;

int main() {
	enum open_modes {input, output, append}; // input = 0, output = 1, append = 2;
	enum Forms {shape = 1, sphere, cylinder, polygon}; // shape = 1, sphere = 2, cylinder = 3, polygon = 4;

	enum Points {point2d = 2, point2w,
				 point3d = 3, point3w}; // 2 3 3 4
	Points pt3d = point3d;
	// Points pt2w = 3; // error
	// Points pt2w = polygon; // error
	Points pt2w = pt3d;
	cout << pt3d << endl;
	cout << pt2w << endl;
	return 0;
}
