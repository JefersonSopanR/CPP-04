#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _count(0)
{
	for (int i = 0; i < 4; i++)
		this->_source[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	*this = src;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_source[i] != NULL)
			delete this->_source[i];
	}
}

MateriaSource &MateriaSource::operator=(MateriaSource const &src)
{
	if (this != &src)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_source[i] != NULL)
				delete this->_source[i];
			this->_source[i] = src._source[i]->clone();
		}
		this->_count = src._count;
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (this->_count < 4)
	{
		this->_source[this->_count] = m;
		this->_count++;
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_source[i] != NULL && this->_source[i]->getType() == type)
			return this->_source[i]->clone();
	}
	return NULL;
}
