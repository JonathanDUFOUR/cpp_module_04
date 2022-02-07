/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 13:34:07 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/07 04:23:55 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/MateriaSource.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

MateriaSource::MateriaSource(void) :
	IMateriaSource(),
	_memory()
{
	std::cout
	<< "Creating MateriaSource"
	<< std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &src) :
	IMateriaSource(src),
	_memory()
{
	std::cout
	<< "Creating MateriaSource"
	<< std::endl;
	*this = src;
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

MateriaSource::~MateriaSource(void)
{
	int	idx;

	std::cout
	<< "Destroying MateriaSource"
	<< std::endl;
	for (idx = 0 ; idx < 4 ; ++idx)
		delete this->_memory[idx];
}

// ************************************************************************* //
//                                 Accessors                                 //
// ************************************************************************* //

std::string const	&MateriaSource::getSlotType(int const idx) const
{
	if (this->_memory[idx])
		return this->_memory[idx]->getType();
	return NULL;
}

// ************************************************************************* //
//                          Public Member Functions                          //
// ************************************************************************* //

void	MateriaSource::learnMateria(AMateria *m)
{
	int	idx;

	for (idx = 0 ; idx < 4 && this->_memory[idx] ; ++idx);
	if (idx < 4)
		_memory[idx] = m;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	int	idx;

	for (idx = 0 ; idx < 4 && this->_memory[idx] ; ++idx)
		if (!this->_memory[idx]->getType().compare(type))
			return this->_memory[idx]->clone();
	return NULL;
}

// ************************************************************************* //
//                                 Operators                                 //
// ************************************************************************* //

MateriaSource	&MateriaSource::operator=(MateriaSource const &rhs)
{
	int	idx;

	if (this != &rhs)
	{
		for (idx = 0 ; idx < 4 ; ++idx)
		{
			delete this->_memory[idx];
			this->_memory[idx] = NULL;
			if (rhs._memory[idx])
				this->_memory[idx] = rhs._memory[idx]->clone();
		}
	}
	return *this;
}

std::ostream	&operator<<(std::ostream &o, MateriaSource const &rhs)
{
	int	i;

	o << "MateriaSource:" << std::endl
	<< "\t" "memory:" << std::endl;
	for (i = 0 ; i < 4 ; ++i)
		o << "\t\t" "[" << i << "] " << rhs.getSlotType(i) << std::endl;
	return o;
}
