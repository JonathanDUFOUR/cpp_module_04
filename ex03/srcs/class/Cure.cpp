/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 06:25:48 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/30 15:44:02 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/Cure.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

Cure::Cure(void) :
	AMateria("cure")
{
	std::cout
	<< "Creating Cure"
	<< std::endl;
}

Cure::Cure(Cure const &src) :
	AMateria("cure")
{
	std::cout
	<< "Creating Cure"
	<< std::endl;
	*this = src;
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

Cure::~Cure(void)
{
	std::cout
	<< "Destroying Cure"
	<< std::endl;
}

// ************************************************************************* //
//                          Public Member Functions                          //
// ************************************************************************* //

void	Cure::use(ICharacter &target)
{
	std::cout
	<< "* heals "
	<< target.getName()
	<< "'s wounds *"
	<< std::endl;
}

AMateria	*Cure::clone(void) const
{
	return new Cure();
}

// ************************************************************************** //
//                             Operator Overloads                             //
// ************************************************************************** //

Cure	&Cure::operator=(Cure const &rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Cure const &rhs)
{
	o << "Cure:" << std::endl
	<< "\t" "type: " << rhs.getType() << std::endl;
	return o;
}
