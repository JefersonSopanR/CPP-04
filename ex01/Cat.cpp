#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), brain(new Brain())
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->type = copy.type;
	if (copy.brain)
		this->brain = new Brain(*copy.brain);
	else
		this->brain = NULL;
}

Cat &Cat::operator=(const Cat &copy)
{
	std::cout << "Cat assignation operator called" << std::endl;
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

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	if (this->brain)
		delete this->brain;
}

void Cat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
}
