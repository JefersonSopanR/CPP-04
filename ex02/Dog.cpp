#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), brain(new Brain())
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = copy.type;
	if (copy.brain)
		this->brain = new Brain(*copy.brain);
	else
		this->brain = NULL;
}

Dog &Dog::operator=(const Dog &copy)
{
	std::cout << "Dog assignation operator called" << std::endl;
	if (this != &copy)
	{
		this->type = copy.type;
		if (this->brain)
			delete this->brain;
		if (copy.brain)
			this->brain = new Brain(*copy.brain);
		else
			this->brain = NULL;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	if (this->brain)
		delete this->brain;
}

void Dog::makeSound() const
{
	std::cout << "Woof Woof" << std::endl;
}
