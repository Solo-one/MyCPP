/*************************************************************************
	> File Name: main.cpp
	> Author: xiaoming
	> Mail: quanshishan@qq.com 
	> Created Time: 2018年06月17日 星期日 23时06分53秒
 ************************************************************************/

#include<iostream>
#include<cstdlib>
#include<pthread.h>
using namespace std;

#define NUM 5

struct thread_data {
	int thread_id;
	char* message;
};

void* printHello(void* threadid) {
	long tid;
	tid = (long) threadid;
	cout << "ThreadId :" << tid << endl;
	pthread_exit(NULL);
}

void* printThreadData(void* threadarg) {
	struct thread_data* m_data;
	m_data = (struct thread_data *) threadarg;
	cout << "Thread ID:" << m_data->thread_id << endl;
	cout << "Thread message:" << m_data->message << endl;
	pthread_exit(NULL);
}

int main() {
	cout << "Hello World!" << endl;
	pthread_t threads[NUM];
	int rc;
	int i;
	for (i=0; i < NUM; i++) {
		cout << "create thread：" << i << endl;
		struct thread_data mdata;
		mdata.thread_id = i;
		mdata.message = "hello world,你好";
		rc = pthread_create(&threads[i], NULL, printThreadData, (void*) &mdata);
		if (rc) {
			cout << "Error: unable to create thread" << endl;
			exit(-1);
		}
	}
	pthread_exit(NULL);
	return 0;
}
