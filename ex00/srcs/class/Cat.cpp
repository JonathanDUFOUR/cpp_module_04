/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 20:34:25 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/25 09:59:07 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/Cat.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

Cat::Cat(void) :
	Animal(std::string("Cat"))
{
	if (DEBUG)
		std::cout
		<< "Creating Cat "
		<< this->_type
		<< std::endl;
}

Cat::Cat(Cat const &src) :
	Animal(src._type)
{
	if (DEBUG)
		std::cout
		<< "Creating Cat "
		<< this->_type
		<< std::endl;
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

Cat::~Cat(void)
{
	if (DEBUG)
		std::cout
		<< "Destroying Cat "
		<< this->_type
		<< std::endl;
}

// ************************************************************************* //
//                          Public Member Functions                          //
// ************************************************************************* //

void	Cat::makeSound(void) const
{
	if (DEBUG)
		std::cout
		<< "Calling Cat::makeSound()"
		<< std::endl;
	std::cout
	<< "Cat "
	<< this->_type
	<< " is making a sound: Meow"
	<< std::endl;
}

// ************************************************************************* //
//                                 Operators                                 //
// ************************************************************************* //

Cat	&Cat::operator=(Cat const &rhs)
{
	if (DEBUG)
		std::cout
		<< "Calling Cat::operator=()"
		<< std::endl;
	if (this != &rhs)
		this->Animal::operator=(rhs);
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Cat const &rhs)
{
	o << "Cat:" << std::endl
	<< "\t" "type: " << rhs.getType() << std::endl;
	return o;
}
