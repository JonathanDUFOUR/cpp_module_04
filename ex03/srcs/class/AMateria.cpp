/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 05:41:55 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/20 11:52:53 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/AMateria.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

AMateria::AMateria(std::string const &type) :
	_type(type)
{
	if (DEBUG)
		std::cout
		<< "Creating AMateria "
		<< this->_type
		<< std::endl;
}

AMateria::AMateria(AMateria const &src) :
	_type(src._type)
{
	if (DEBUG)
		std::cout
		<< "Creating AMateria "
		<< this->_type
		<< std::endl;
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

AMateria::~AMateria(void)
{
	if (DEBUG)
		std::cout
		<< "Destroying AMateria"
		<< std::endl;
}

// ************************************************************************* //
//                                 Accessors                                 //
// ************************************************************************* //

std::string const	&AMateria::getType(void) const
{
	if (DEBUG)
		std::cout
		<< "Calling AMateria::getType()"
		<< std::endl;
	return this->_type;
}

// ************************************************************************* //
//                          Public Member Functions                          //
// ************************************************************************* //

void	AMateria::use(ICharacter &target)
{
	if (DEBUG)
		std::cout
		<< "Calling AMateria::use()"
		<< std::endl;
	std::cout
	<< "* uses AMateria "
	<< this->_type
	<< " to "
	<< target.getName()
	<< " *"
	<< std::endl;
}

// ************************************************************************* //
//                                 Operators                                 //
// ************************************************************************* //

AMateria	&AMateria::operator=(AMateria const &rhs)
{
	if (DEBUG)
		std::cout
		<< "Calling AMateria::operator=()"
		<< std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

std::ostream	&operator<<(std::ostream &o, AMateria const &rhs)
{
	o << "AMateria:" << std::endl
	<< "\t" "type: " << rhs.getType() << std::endl;
	return o;
}
