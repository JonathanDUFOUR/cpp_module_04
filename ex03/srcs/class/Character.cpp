/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 07:23:16 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/29 09:40:53 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/Character.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

Character::Character(void) :
	ICharacter(),
	_inventory()
{
	std::cout
	<< "Creating Character "
	<< this->_name
	<< std::endl;
}

Character::Character(Character const &src) :
	ICharacter(src._name),
	_inventory()
{
	std::cout
	<< "Creating Character "
	<< this->_name
	<< std::endl;
}

Character::Character(std::string const name) :
	ICharacter(name),
	_inventory()
{
	std::cout
	<< "Creating Character "
	<< this->_name
	<< std::endl;
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

Character::~Character(void)
{
	int	idx;

	std::cout
	<< "Destroying Character "
	<< this->_name
	<< std::endl;
	for (idx = 0 ; idx < 4 ; ++idx)
		if (this->_inventory[idx])
			delete _inventory[idx];
}

// ************************************************************************* //
//                                 Accessors                                 //
// ************************************************************************* //

std::string const	&Character::getName(void) const
{
	return this->_name;
}

// ************************************************************************* //
//                          Public Member Functions                          //
// ************************************************************************* //

void	Character::equip(AMateria *m)
{
	int	idx;

	for (idx = 0 ; idx < 4 && this->_inventory[idx] ; ++idx);
	if (idx < 4)
		_inventory[idx] = m;
}

void	Character::unequip(int idx)
{
	this->_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (this->_inventory[idx])
		this->_inventory[idx]->use(target);
}
