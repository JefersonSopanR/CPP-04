#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

void	test()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");

	AMateria* tmp;
	AMateria* tmp2;
	AMateria* tmp3;
	AMateria* tmp4;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp2 = src->createMateria("cure");
	me->equip(tmp2);
	tmp3 = src->createMateria("ice");
	me->equip(tmp3);
	tmp4 = src->createMateria("cure");
	me->equip(tmp4);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);

	std::cout << "-------------------" << std::endl;
	std::cout << "Unequip Ice" << std::endl;

	me->unequip(0);
	me->unequip(2);

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);

	delete bob;
	delete me;
	delete src;
}

void	test2()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");

	AMateria* tmp;
	AMateria* tmp2;
	AMateria* tmp3;
	AMateria* tmp4;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp2 = src->createMateria("cure");
	me->equip(tmp2);
	tmp3 = src->createMateria("ice");
	me->equip(tmp3);
	tmp4 = src->createMateria("cure");
	me->equip(tmp4);

	ICharacter* bob = new Character("bob");

	std::cout << "-------------------" << std::endl;
	std::cout << "Unequip Cure" << std::endl;

	me->unequip(1);
	me->unequip(3);

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);

	delete bob;
	delete me;
	delete src;
}

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	std::cout << "-------------------" << std::endl;

	test();
	test2();

	return 0;
}