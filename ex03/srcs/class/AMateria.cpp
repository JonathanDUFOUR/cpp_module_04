/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 05:41:55 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/07 04:22:29 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/AMateria.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

AMateria::AMateria(void) :
	type("defaultType")
{
	std::cout
	<< "Creating AMateria "
	<< this->type
	<< std::endl;
}

AMateria::AMateria(AMateria const &src) :
	type(src.type)
{
	std::cout
	<< "Creating AMateria "
	<< this->type
	<< std::endl;
	*this = src;
}

AMateria::AMateria(std::string const &type) :
	type(type)
{
	std::cout
	<< "Creating AMateria "
	<< this->type
	<< std::endl;
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

AMateria::~AMateria(void)
{
	std::cout
	<< "Destroying AMateria"
	<< std::endl;
}

// ************************************************************************* //
//                                 Accessors                                 //
// ************************************************************************* //

std::string const	&AMateria::getType(void) const
{
	return this->type;
}

// ************************************************************************* //
//                          Public Member Functions                          //
// ************************************************************************* //

void	AMateria::use(ICharacter &target)
{
	std::cout
	<< "* uses AMateria "
	<< this->type
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
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return *this;
}

std::ostream	&operator<<(std::ostream &o, AMateria const &rhs)
{
	o << "AMateria:" << std::endl
	<< "\t" "type: " << rhs.getType() << std::endl;
	return o;
}
