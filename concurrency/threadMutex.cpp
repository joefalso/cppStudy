//I've seen this exercise in many sites

#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

//shared resource
int number = 0;

void sharedResourceAccess(){
	
	//comment mtx.lock() and mtx.unlock()
	//to see the data race
	mtx.lock();
	for(int i=0; i<1000000; i++){
		number++;
	}
	mtx.unlock();
}

int main()
{
	std::thread t1 (sharedResourceAccess);
	std::thread t2 (sharedResourceAccess); 
	
	t1.join();
	t2.join();

	std::cout << number << std::endl;
	return 0;
}
