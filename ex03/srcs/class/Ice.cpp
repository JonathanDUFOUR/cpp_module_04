/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 06:26:03 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/20 12:29:33 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/Ice.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

Ice::Ice(void) :
	AMateria(std::string("ice"))
{
	if (DEBUG)
		std::cout
		<< "Creating Ice"
		<< std::endl;
}

Ice::Ice(Ice const &src) :
	AMateria(src._type)
{
	if (DEBUG)
		std::cout
		<< "Creating Ice"
		<< std::endl;
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

Ice::~Ice(void)
{
	if (DEBUG)
		std::cout
		<< "Destroying Ice"
		<< std::endl;
}

// ************************************************************************* //
//                          Public Member Functions                          //
// ************************************************************************* //

void	Ice::use(ICharacter &target)
{
	if (DEBUG)
		std::cout
		<< "Calling Ice::use()"
		<< std::endl;
	std::cout
	<< "* shoots an ice bolt at "
	<< target.getName()
	<< " *"
	<< std::endl;
}

AMateria *Ice::clone(void) const
{
	if (DEBUG)
		std::cout
		<< "Calling Ice::clone()"
		<< std::endl;
	return new Ice(*this);
}

// ************************************************************************* //
//                                 Operators                                 //
// ************************************************************************* //

Ice	&Ice::operator=(Ice const &rhs)
{
	if (DEBUG)
		std::cout
		<< "Calling Ice::operator=()"
		<< std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Ice const &rhs)
{
	o << "Ice:" << std::endl
	<< "\t" "type: " << rhs.getType() << std::endl;
	return o;
}
