/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 06:26:03 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/07 04:23:03 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/Ice.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

Ice::Ice(void) :
	AMateria("ice")
{
	std::cout
	<< "Creating Ice"
	<< std::endl;
}

Ice::Ice(Ice const &src) :
	AMateria("ice")
{
	std::cout
	<< "Creating Ice"
	<< std::endl;
	*this = src;
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

Ice::~Ice(void)
{
	std::cout
	<< "Destroying Ice"
	<< std::endl;
}

// ************************************************************************* //
//                          Public Member Functions                          //
// ************************************************************************* //

void	Ice::use(ICharacter &target)
{
	std::cout
	<< "* shoots an ice bolt at "
	<< target.getName()
	<< " *"
	<< std::endl;
}

AMateria *Ice::clone(void) const
{
	return new Ice();
}

// ************************************************************************* //
//                                 Operators                                 //
// ************************************************************************* //

Ice	&Ice::operator=(Ice const &rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Ice const &rhs)
{
	o << "Ice:" << std::endl
	<< "\t" "type: " << rhs.getType() << std::endl;
	return o;
}
