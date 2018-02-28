#include <iostream>
#include <pthread.h>
using namespace std;

#define Thread_num 5

void *func(void *args)
{
	cout << "Hello Runoob" << endl;
	return 0;
}

int main()
{
	pthread_t thread[Thread_num];
	int  ret;
	for(int i = 0; i < Thread_num; i++) {
		ret = pthread_create(&thread[i], NULL, func, NULL);
		if(ret != 0) {
			cerr << "thread[" << i << "] create failed!" << endl;
		}
	}

	pthread_exit(NULL);
	return 0;
}
