/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 20:34:15 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/29 05:24:59 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/AAnimal.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

AAnimal::AAnimal(void) :
	type("defaultType")
{
	std::cout
	<< "Creating AAnimal "
	<< this->type
	<< std::endl;
}

AAnimal::AAnimal(AAnimal const &src) :
	type(src.type)
{
	std::cout
	<< "Creating AAnimal "
	<< this->type
	<< std::endl;
	*this = src;
}

AAnimal::AAnimal(std::string const type) :
	type(type)
{
	std::cout
	<< "Creating AAnimal "
	<< this->type
	<< std::endl;
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

AAnimal::~AAnimal(void)
{
	std::cout
	<< "R.I.P. AAnimal "
	<< this->type
	<< std::endl;
}

// ************************************************************************* //
//                                 Accessors                                 //
// ************************************************************************* //

std::string	AAnimal::getType(void) const
{
	return this->type;
}

// ************************************************************************* //
//                          Public Member Functions                          //
// ************************************************************************* //

void	AAnimal::makeSound(void) const
{
	std::cout
	<< "AAnimal "
	<< this->type
	<< " is making a sound: ..."
	<< std::endl;
}

// ************************************************************************** //
//                             Operator Overloads                             //
// ************************************************************************** //

AAnimal	&AAnimal::operator=(AAnimal const &rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return *this;
}

std::ostream	&operator<<(std::ostream &o, AAnimal const &rhs)
{
	o << "AAnimal:" << std::endl
	<< "\t" "type: " << rhs.getType() << std::endl;
	return o;
}
