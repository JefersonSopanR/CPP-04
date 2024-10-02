#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	//Animal test;
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		delete j;//should not create a leak
		delete i;
	}
	std::cout << "-------------------" << std::endl;
	Dog basic;
    {
        Dog tmp = basic;
    }
	{
		std::cout << "-------------------" << std::endl;
		const Animal* animals[8] = {new Dog(), new Cat(), new Dog(), new Cat(), new Dog(), new Cat(), new Dog(), new Cat()};
		for (int i = 0; i < 8; i++)
			delete animals[i]; 
	}
	return 0;
}