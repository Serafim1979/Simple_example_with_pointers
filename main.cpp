#include<iostream>

int main()
{
	int updates = 6;
	int * p_updates;

	p_updates = &updates;

	std::cout << "Values: updates = " << updates;
	std::cout << ", *p_updates = " << *p_updates << std::endl;
	
	std::cout << "Address: &updates = " << &updates;
	std::cout << ", p_updates = " << p_updates << std::endl;

	*p_updates = *p_updates + 1;
	std::cout << "Now updates = " << updates << std::endl;

	system("pause");
	return 0;
}