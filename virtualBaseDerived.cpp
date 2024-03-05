#include <iostream>


class Base
{
public:
	virtual void func_1() {std::cout << "Base 1" << std::endl;} //runtime overriden
	
	void func_2() {std::cout << "Base 2"  << std::endl;}

	virtual void func_3() {std::cout << "Base 3"  << std::endl;}

	void func_4(){std::cout << "Base 4"  << std::endl;}
};

class Derived : public Base
{
public:
	void func_1() {std::cout << "Derived 1"  << std::endl;} //runtime override
	
	void func_2() {std::cout << "Derived 2"  << std::endl;}	

	virtual void func_4() {std::cout << "Derive 4"  << std::endl;}
};

int main()
{
	Base* b;
	Derived d;
	b = &d;

	b->func_1();
	b->func_2();
	b->func_3();
	b->func_4();
}
