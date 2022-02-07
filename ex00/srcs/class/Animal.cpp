/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 20:34:15 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/07 04:17:09 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/Animal.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

Animal::Animal(void) :
	type("defaultType")
{
	std::cout
	<< "Creating Animal "
	<< this->type
	<< std::endl;
}

Animal::Animal(Animal const &src) :
	type(src.type)
{
	std::cout
	<< "Creating Animal "
	<< this->type
	<< std::endl;
	*this = src;
}

Animal::Animal(std::string const type) :
	type(type)
{
	std::cout
	<< "Creating Animal "
	<< this->type
	<< std::endl;
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

Animal::~Animal(void)
{
	std::cout
	<< "R.I.P. Animal "
	<< this->type
	<< std::endl;
}

// ************************************************************************* //
//                                 Accessors                                 //
// ************************************************************************* //

std::string	Animal::getType(void) const
{
	return this->type;
}

// ************************************************************************* //
//                          Public Member Functions                          //
// ************************************************************************* //

void	Animal::makeSound(void) const
{
	std::cout
	<< "Animal "
	<< this->type
	<< " is making a sound: ..."
	<< std::endl;
}

// ************************************************************************* //
//                                 Operators                                 //
// ************************************************************************* //

Animal	&Animal::operator=(Animal const &rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Animal const &rhs)
{
	o << "Animal:" << std::endl
	<< "\t" "type: " << rhs.getType() << std::endl;
	return o;
}
