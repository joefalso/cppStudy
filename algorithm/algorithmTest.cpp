#include <iostrea,>
#include <vector>
#include <algorithm>


int main()
{
	std::vector<int> v {1,2,3,4,5};
	
	std::for_each ( v.begin(), v.end(), [](const int n){std::cout << n << ' ';});
	std::cout << std::endl;

	return 0;
}
