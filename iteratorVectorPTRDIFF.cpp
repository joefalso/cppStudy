#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v {1,2,3,4,5,6,7,8,9};

	std::vector<int>::iterator it = v.begin();

	it += 5;
	++it;
	
	ptrdiff_t dst = it - v.begin();  //ptype dst: long

	std::cout << dst << std::endl;	
}
