#include <iostream>
#include <pthread.h>
#include <stdlib.h>

using namespace std;

#define THREAD_NUM 5

struct thread_data
{
	int thread_id;
	char *message;
};


void *func(void *arg)
{
	struct thread_data *TD = (struct thread_data *)arg;
	cout << "thread_id:" << TD->thread_id;
	cout << "  message:" << TD->message << endl;
	pthread_exit(NULL);
}

int main()
{
	pthread_t pthread[THREAD_NUM];
	int ret;
	struct thread_data td[THREAD_NUM];
	for(int i = 0; i < THREAD_NUM; i++) {
		cout << "main() create pthread:" << i << endl;
		td[i].thread_id = i;
		td[i].message = (char *)"This is message";
		ret = pthread_create(&pthread[i], NULL, func, (void *)&td[i]);
		if (ret) {
			cerr << "thread create failed!" << endl;
			exit(-1);
		}
	}
	pthread_exit(NULL);
	return 0;
}
