#include <iostream>
#include <thread>

using namespace std;
thread::id main_thread_id = this_thread::get_id();

void hello()
{
	cout << "Hello Concurrent World" << endl;
	if(main_thread_id == this_thread::get_id())
		cout << "This is the main thread" << endl;
	else
		cout << "This is not the main thread" << endl;
}

void pause_thread(int n)
{
	this_thread::sleep_for(chrono::seconds(n));
	cout << "pause of " << n << " seconds ended" << endl;
}

int main()
{
	thread t(hello);
	cout << t.hardware_concurrency() << endl; //可以并发执行多少个(不准确)
	cout << "native_handle" << t.native_handle() << endl; //可以并发执行多少个(不准确)
	t.join();
	thread a(hello);
	a.detach();
	thread threads[5];  //默认构造线程

	cout << "Spawning 5 threads...\n";
	for(int i = 0; i < 5; ++i) {
		threads[i] = thread(pause_thread, i + 1); //move-assign threads
	}
	cout << "Done spawning threads. Now wating for them to join:" << endl;
	for(auto &thread : threads)
		thread.join();
	cout << "All threads joined" << endl;

}
