#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	std :: cout << "-------------------" << std :: endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	
	delete meta;
	delete j;
	delete i;

	std :: cout << "-------------------" << std :: endl;

	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	std::cout << "WrongCat type: " << wrongCat->getType() << " " << std::endl;
	std::cout << "wrongCat sound: ";
	wrongCat->makeSound();
	std::cout << "wrongMeta sound: ";
	wrongMeta->makeSound();

	delete wrongMeta;
	delete wrongCat;

	std :: cout << "-------------------" << std :: endl;

	const Animal* correctMeta = new Animal();
	const Animal* correctCat = new Cat();
	std::cout << "CorrectCat type: " << correctCat->getType() << " " << std::endl;
	std::cout << "correctCat sound: ";
	correctCat->makeSound();
	std::cout << "correctMeta sound: ";
	correctMeta->makeSound();

	delete correctMeta;
	delete correctCat;

	return 0;
}
