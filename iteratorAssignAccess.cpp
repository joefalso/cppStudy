#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v{1,2,3,4,5};

	std::vector<int>::iterator it;

	for(it = v.begin(); it!=v.end(); it++){
		*it = 7;  //first: &v.at()=1=*it; later: *it=7=&v.at()
	}	

	for(it = v.begin(); it!=v.end(); it++){
		std::cout << *it << ' ';
	}
	
	std::cout << std::endl;

	return 0;
}
