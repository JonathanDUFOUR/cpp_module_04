/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 13:34:07 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/20 19:39:28 by jodufour         ###   ########.fr       */
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
	if (DEBUG)
		std::cout
		<< "Creating MateriaSource"
		<< std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &src) :
	IMateriaSource(src),
	_memory()
{
	int	idx;

	if (DEBUG)
		std::cout
		<< "Creating MateriaSource"
		<< std::endl;
	for (idx = 0 ; idx < 4 ; ++idx)
		if (src._memory[idx])
			this->_memory[idx] = src._memory[idx]->clone();
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

MateriaSource::~MateriaSource(void)
{
	int	idx;

	if (DEBUG)
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
	if (DEBUG)
		std::cout
		<< "Calling MateriaSource::getSlotType()"
		<< std::endl;
	if (this->_memory[idx])
		return this->_memory[idx]->getType();
	return MateriaSource::_emptyType;
}

// ************************************************************************* //
//                          Public Member Functions                          //
// ************************************************************************* //

void	MateriaSource::learnMateria(AMateria *m)
{
	int	idx;

	if (DEBUG)
		std::cout
		<< "Calling MateriaSource::learnMateria()"
		<< std::endl;
	for (idx = 0 ; idx < 4 && this->_memory[idx] ; ++idx);
	if (idx < 4)
		_memory[idx] = m;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	int	idx;

	if (DEBUG)
		std::cout
		<< "Calling MateriaSource::createMateria()"
		<< std::endl;
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

	if (DEBUG)
		std::cout
		<< "Calling MateriaSource::operator=()"
		<< std::endl;
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
	int	idx;

	o << "MateriaSource:" << std::endl
	<< "\t" "memory:" << std::endl;
	for (idx = 0 ; idx < 4 ; ++idx)
		o << "\t\t" "[" << idx << "] " << rhs.getSlotType(idx) << std::endl;
	return o;
}

// ************************************************************************** //
//                             Private Attributes                             //
// ************************************************************************** //

std::string const	MateriaSource::_emptyType = std::string("empty");
