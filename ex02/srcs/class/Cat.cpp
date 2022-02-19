/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 20:34:25 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/19 22:41:52 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/Cat.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

Cat::Cat(void) :
	AAnimal(std::string("catType")),
	_mind(new Brain)
{
	if (DEBUG)
		std::cout
		<< "Creating Cat "
		<< this->_type
		<< std::endl;
}

Cat::Cat(Cat const &src) :
	AAnimal(src._type),
	_mind(new Brain(*src._mind))
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
		<< std::endl;
	delete this->_mind;
}

// ************************************************************************* //
//                                 Accessors                                 //
// ************************************************************************* //

Brain const	&Cat::getMind(void) const
{
	if (DEBUG)
		std::cout
		<< "Calling Cat::getMind()"
		<< std::endl;
	return *this->_mind;
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
		this->_type = rhs._type;
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Cat const &rhs)
{
	o << "Cat:" << std::endl
	<< "\t" "type: " << rhs.getType() << std::endl
	<< "\t" "mind: " << rhs.getMind() << std::endl;
	return o;
}
