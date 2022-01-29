/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 20:34:25 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/29 02:11:58 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/Cat.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

Cat::Cat(void) :
	Animal(std::string("catType"))
{
	std::cout
	<< "Creating Cat "
	<< this->type
	<< std::endl;
}

Cat::Cat(Cat const &src) :
	Animal(std::string("catType"))
{
	std::cout
	<< "Creating Cat "
	<< this->type
	<< std::endl;
	*this = src;
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

Cat::~Cat(void)
{
	std::cout
	<< "R.I.P. Cat "
	<< this->type
	<< std::endl;
}

// ************************************************************************* //
//                          Public Member Functions                          //
// ************************************************************************* //

void	Cat::makeSound(void) const
{
	std::cout
	<< "Cat "
	<< this->type
	<< " is making a sound: Meow"
	<< std::endl;
}

// ************************************************************************** //
//                             Operator Overloads                             //
// ************************************************************************** //

Cat	&Cat::operator=(Cat const &rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Cat const &rhs)
{
	o << "Cat:" << std::endl
	<< "\t" "type: " << rhs.getType() << std::endl;
	return o;
}
