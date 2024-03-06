#include <iostream>
#include <thread>
#include <mutex>

int x = 0;
std::mutex mtx;

void print_x(){
	std::cout << x << std::endl;
}

void set_x(int new_x) {
	x = new_x;
}

void thread1() {
	//mtx.lock();
  	print_x();
	//mtx.unlock();
}

void thread2() {
	mtx.lock();
	set_x(1);
	mtx.unlock();
}


int main()
{
	std::thread t1 (thread1);
	std::thread t2 (thread2); 
	
	t2.join();
	t1.join();

	return 0;
}
