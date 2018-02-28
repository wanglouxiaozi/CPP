#include <iostream>
#include <pthread.h>
#include <stdlib.h>

using namespace std;

#define THREAD_NUM 5

void *func(void *arg)
{
	int num = *((int *)arg);
	cout << "thread id:" << num << endl;
	pthread_exit(NULL);
}

int main()
{
	pthread_t pthread[THREAD_NUM];
	int ret;
	int num[THREAD_NUM];
	for(int i = 0; i < THREAD_NUM; i++) {
		num[i] = i;
		cout << "main() create thread:" << i << endl;
		ret = pthread_create(&pthread[i], NULL, func, (void *)&num[i]);
		if(ret) {
			cerr << "pthread[" << i << "] create failed,ret=" << ret << endl;
			exit(-1);
		} 
	}
	pthread_exit(NULL);
	return 0;
}
