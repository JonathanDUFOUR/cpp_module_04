/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 02:15:15 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/07 04:20:39 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/WrongAnimal.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

WrongAnimal::WrongAnimal(void) :
	type("defaultType")
{
	std::cout
	<< "Creating WrongAnimal "
	<< this->type
	<< std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) :
	type(src.type)
{
	std::cout
	<< "Creating WrongAnimal "
	<< this->type
	<< std::endl;
	*this = src;
}

WrongAnimal::WrongAnimal(std::string const type) :
	type(type)
{
	std::cout
	<< "Creating WrongAnimal "
	<< this->type
	<< std::endl;
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

WrongAnimal::~WrongAnimal(void)
{
	std::cout
	<< "R.I.P. WrongAnimal "
	<< this->type
	<< std::endl;
}

// ************************************************************************* //
//                                 Accessors                                 //
// ************************************************************************* //

std::string	WrongAnimal::getType(void) const
{
	return this->type;
}

// ************************************************************************* //
//                          Public Member Functions                          //
// ************************************************************************* //

void	WrongAnimal::makeSound(void) const
{
	std::cout
	<< "WrongAnimal "
	<< this->type
	<< " is making a sound: ..."
	<< std::endl;
}

// ************************************************************************* //
//                                 Operators                                 //
// ************************************************************************* //

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return *this;
}

std::ostream	&operator<<(std::ostream &o, WrongAnimal const &rhs)
{
	o << "WrongAnimal:" << std::endl
	<< "\t" "type: " << rhs.getType() << std::endl;
	return o;
}
