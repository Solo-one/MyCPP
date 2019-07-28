/*************************************************************************
	> File Name: hello.cpp
	> Author: xiaoming
	> Mail: quanshishan@qq.com 
	> Created Time: 2018年06月17日 星期日 23时57分16秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main(int argc, char* argv[]) {
	cout << "Hello world" << endl;
	int cc = 1111;
	cout.operator<<(cc);
	cout.operator<<(endl);
	return 0;
}
