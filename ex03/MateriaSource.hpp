#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *_source[4];
		int _count;
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &src);
		virtual ~MateriaSource();
		MateriaSource &operator=(MateriaSource const &src);

		virtual void learnMateria(AMateria *m);
		virtual AMateria *createMateria(std::string const &type);
};

#endif