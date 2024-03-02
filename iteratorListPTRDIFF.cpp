#include <iostream>
#include <list>


int main()
{
	std::list<int> l {1,2,3,4,5,6,7,8,9};

	std::list<int>::iterator it = l.begin();
	
	//it += 5; //error: no match operator +=

	//ptrdiff_t  dst = it - l.begin();  //error: no match operator and template argument deduction/substitution failed
	
	std::advance(it, 5); //valid linear operation; it=6

	ptrdiff_t dst = std::distance(l.begin(), it); //valid linear operation

	std::cout << dst << std::endl;
}
