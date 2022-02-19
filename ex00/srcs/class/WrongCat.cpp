/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 03:23:53 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/19 12:46:10 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "class/WrongCat.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

WrongCat::WrongCat(void) :
	WrongAnimal(std::string("wrongCatType"))
{
	if (DEBUG)
		std::cout
		<< "Creating WrongCat "
		<< this->_type
		<< std::endl;
}

WrongCat::WrongCat(WrongCat const &src) :
	WrongAnimal(src._type)
{
	if (DEBUG)
		std::cout
		<< "Creating WrongCat "
		<< this->_type
		<< std::endl;
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

WrongCat::~WrongCat(void)
{
	if (DEBUG)
		std::cout
		<< "Destroying WrongCat "
		<< this->_type
		<< std::endl;
}

// ************************************************************************* //
//                          Public Member Functions                          //
// ************************************************************************* //

void	WrongCat::makeSound(void) const
{
	if (DEBUG)
		std::cout
		<< "Calling WrongCat::makeSound()"
		<< std::endl;
	std::cout
	<< "WrongCat "
	<< this->_type
	<< " is making a sound: Meow"
	<< std::endl;
}

// ************************************************************************* //
//                                 Operators                                 //
// ************************************************************************* //

WrongCat	&WrongCat::operator=(WrongCat const &rhs)
{
	if (DEBUG)
		std::cout
		<< "Calling WrongCat::operator=()"
		<< std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

std::ostream	&operator<<(std::ostream &o, WrongCat const &rhs)
{
	o << "WrongCat:" << std::endl
	<< "\t" "type: " << rhs.getType() << std::endl;
	return o;
}
