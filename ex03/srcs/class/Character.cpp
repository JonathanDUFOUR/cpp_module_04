/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 07:23:16 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/20 15:49:01 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/Character.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

Character::Character(std::string const &name) :
	ICharacter(),
	_name(name),
	_inventory()
{
	if (DEBUG)
		std::cout
		<< "Creating Character "
		<< this->_name
		<< std::endl;
}

Character::Character(Character const &src) :
	ICharacter(),
	_name(src._name),
	_inventory()
{
	int	idx;

	if (DEBUG)
		std::cout
		<< "Creating Character "
		<< this->_name
		<< std::endl;
	for (idx = 0 ; idx < 4 ; ++idx)
		if (src._inventory[idx])
			this->_inventory[idx] = src._inventory[idx]->clone();
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

Character::~Character(void)
{
	int	idx;

	if (DEBUG)
		std::cout
		<< "Destroying Character "
		<< this->_name
		<< std::endl;
	for (idx = 0 ; idx < 4 ; ++idx)
		delete _inventory[idx];
}

// ************************************************************************* //
//                                 Accessors                                 //
// ************************************************************************* //

std::string const	&Character::getName(void) const
{
	if (DEBUG)
		std::cout
		<< "Calling Character::getName()"
		<< std::endl;
	return this->_name;
}

std::string const	&Character::getSlotType(int const idx) const
{
	if (DEBUG)
		std::cout
		<< "Calling Character::getSlotType()"
		<< std::endl;
	if (this->_inventory[idx])
		return this->_inventory[idx]->getType();
	return NULL;
}

AMateria	*Character::getSlot(int const idx) const
{
	if (DEBUG)
		std::cout
		<< "Calling Character::getSlot()"
		<< std::endl;
	return this->_inventory[idx];
}

// ************************************************************************* //
//                          Public Member Functions                          //
// ************************************************************************* //

void	Character::equip(AMateria *m)
{
	int	idx;

	if (DEBUG)
		std::cout
		<< "Calling Character::equip()"
		<< std::endl;
	for (idx = 0 ; idx < 4 && this->_inventory[idx] ; ++idx);
	if (idx < 4)
		_inventory[idx] = m;
}

void	Character::unequip(int const idx)
{
	if (DEBUG)
		std::cout
		<< "Calling Character::unequip()"
		<< std::endl;
	this->_inventory[idx] = NULL;
}

void	Character::use(int const idx, ICharacter &target)
{
	if (DEBUG)
		std::cout
		<< "Calling Character::use()"
		<< std::endl;
	if (this->_inventory[idx])
	{
		std::cout
		<< "Character "
		<< this->_name
		<< ": ";
		this->_inventory[idx]->use(target);
	}
}

bool	Character::isFilled(int const idx) const
{
	if (DEBUG)
		std::cout
		<< "Calling Character::isFilled()"
		<< std::endl;
	if (this->_inventory[idx])
		return true;
	return false;
}

// ************************************************************************* //
//                                 Operators                                 //
// ************************************************************************* //

Character	&Character::operator=(Character const &rhs)
{
	int	idx;

	if (DEBUG)
		std::cout
		<< "Calling Character::operator=()"
		<< std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		for (idx = 0 ; idx < 4 ; ++idx)
		{
			delete this->_inventory[idx];
			this->_inventory[idx] = NULL;
			if (rhs._inventory[idx])
				this->_inventory[idx] = rhs._inventory[idx]->clone();
		}
	}
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Character const &rhs)
{
	int	idx;

	o << "Character:" << std::endl
	<< "\t" "name: " << rhs.getName() << std::endl
	<< "\t" "inventory: " << std::endl;
	for (idx = 0 ; idx < 4 ; ++idx)
		if (rhs.isFilled(idx))
			o << "\t\t" "[" << idx << "] " << rhs.getSlotType(idx) << std::endl;
		else
			o << "\t\t" "[" << idx << "] " << "empty" << std::endl;
	return o;
}
