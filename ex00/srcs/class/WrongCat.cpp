/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 03:23:53 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/07 04:18:37 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "class/WrongCat.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

WrongCat::WrongCat(void) :
	WrongAnimal(std::string("wrongCatType"))
{
	std::cout
	<< "Creating WrongCat "
	<< this->type
	<< std::endl;
}

WrongCat::WrongCat(WrongCat const &src) :
	WrongAnimal(std::string("wrongCatType"))
{
	std::cout
	<< "Creating WrongCat "
	<< this->type
	<< std::endl;
	*this = src;
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

WrongCat::~WrongCat(void)
{
	std::cout
	<< "R.I.P. WrongCat "
	<< this->type
	<< std::endl;
}

// ************************************************************************* //
//                          Public Member Functions                          //
// ************************************************************************* //

void	WrongCat::makeSound(void) const
{
	std::cout
	<< "WrongCat "
	<< this->type
	<< " is making a sound: Meow"
	<< std::endl;
}

// ************************************************************************* //
//                                 Operators                                 //
// ************************************************************************* //

WrongCat	&WrongCat::operator=(WrongCat const &rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return *this;
}

std::ostream	&operator<<(std::ostream &o, WrongCat const &rhs)
{
	o << "WrongCat:" << std::endl
	<< "\t" "type: " << rhs.getType() << std::endl;
	return o;
}
