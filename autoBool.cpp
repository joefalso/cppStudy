#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<bool> v{false, false, false};
	
	std::for_each( v.begin(), v.end(), [](const bool b){
			std::cout << b << ' ';
			});
	std::cout << ", original vector, 3xfalse" << std::endl;
	
	//boolean iterator
	for (bool y : v) {
		y = true; // No changes in the elements inside v  
	}
	std::for_each( v.begin(), v.end(), [](const bool b){
			std::cout << b << ' ';
			});
	std::cout << std::endl;
	
	//auto type iterator
	for (auto x : v) {
		x = true; // Changes the elements inside v
	}
	
	std::for_each( v.begin(), v.end(), [](const bool b){
			std::cout << b << ' ';
			});	
	std::cout << std::endl;
	
	//for (const auto w : v){  // error   
	//for (const auto& w : v){  // error
	for (bool w : v) { //bool false again, won't not change prev value
		w = false;
	}
	
	std::for_each( v.begin(), v.end(), [](bool b){
			std::cout << b << ' ';
			});	
	std::cout << std::endl;

	return 0;
}
