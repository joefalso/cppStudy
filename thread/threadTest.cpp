//https://ryonaldteofilo.medium.com/atomics-in-c-what-is-a-std-atomic-and-what-can-be-made-atomic-part-1-a8923de1384d

#include <iostream>
#include <thread>

int main()
{
	int sum = 0;
   
	auto f = [&sum](){
		for(int i = 0; i < 1000000; i++)
		{
			sum += 1;
		}
	};

	//spawning two threads. no scheduler
	std::thread t1(f); //sum = 0, goes to std_thread.h
	std::thread t2(f); //sum = 0, goes to std_thread.h
	//data race?
	
	t1.join();  //sum has value already. then jumps to loop
	t2.join();  //sum takes other value. then jumps to loop
	
	std::cout << sum << std::endl; //sum final value
	
	return 0;
}
