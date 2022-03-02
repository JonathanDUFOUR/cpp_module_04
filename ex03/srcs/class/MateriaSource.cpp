/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 13:34:07 by jodufour          #+#    #+#             */
/*   Updated: 2022/03/02 21:19:09 by jodufour         ###   ########.fr       */
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
	uint	idx(0U);

	if (DEBUG)
		std::cout
		<< "Creating MateriaSource"
		<< std::endl;
	for ( ; idx < 4U ; ++idx)
		if (src._memory[idx])
			this->_memory[idx] = src._memory[idx]->clone();
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

MateriaSource::~MateriaSource(void)
{
	uint	idx(0U);

	if (DEBUG)
		std::cout
		<< "Destroying MateriaSource"
		<< std::endl;
	for ( ; idx < 4U ; ++idx)
		delete this->_memory[idx];
}

// ************************************************************************* //
//                                 Accessors                                 //
// ************************************************************************* //

std::string const	&MateriaSource::getSlotType(uint const idx) const
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
	uint	idx(0U);

	if (DEBUG)
		std::cout
		<< "Calling MateriaSource::learnMateria()"
		<< std::endl;
	for ( ; idx < 4U && this->_memory[idx] ; ++idx);
	if (idx < 4U)
		_memory[idx] = m;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	uint	idx(0U);

	if (DEBUG)
		std::cout
		<< "Calling MateriaSource::createMateria()"
		<< std::endl;
	for ( ; idx < 4U && this->_memory[idx] ; ++idx)
		if (!this->_memory[idx]->getType().compare(type))
			return this->_memory[idx]->clone();
	return NULL;
}

// ************************************************************************* //
//                                 Operators                                 //
// ************************************************************************* //

MateriaSource	&MateriaSource::operator=(MateriaSource const &rhs)
{
	uint	idx(0U);

	if (DEBUG)
		std::cout
		<< "Calling MateriaSource::operator=()"
		<< std::endl;
	if (this != &rhs)
	{
		for ( ; idx < 4U ; ++idx)
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
	uint	idx(0U);

	o << "MateriaSource:" << std::endl
	<< "\t" "memory:" << std::endl;
	for ( ; idx < 4U ; ++idx)
		o << "\t\t" "[" << idx << "] " << rhs.getSlotType(idx) << std::endl;
	return o;
}

// ************************************************************************** //
//                             Private Attributes                             //
// ************************************************************************** //

std::string const	MateriaSource::_emptyType("empty");
