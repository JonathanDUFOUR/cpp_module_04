/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 07:23:16 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/07 04:22:39 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/Character.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

Character::Character(void) :
	ICharacter(),
	_name("defaultName"),
	_inventory()
{
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
	std::cout
	<< "Creating Character "
	<< this->_name
	<< std::endl;
	*this = src;
}

Character::Character(std::string const name) :
	ICharacter(),
	_name(name),
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
		delete _inventory[idx];
}

// ************************************************************************* //
//                                 Accessors                                 //
// ************************************************************************* //

std::string const	&Character::getName(void) const
{
	return this->_name;
}

std::string const	&Character::getSlotType(int const idx) const
{
	if (this->_inventory[idx])
		return this->_inventory[idx]->getType();
	return NULL;
}

AMateria	*Character::getSlot(int const idx) const
{
	return this->_inventory[idx];
}

// ************************************************************************* //
//                          Public Member Functions                          //
// ************************************************************************* //

void	Character::equip(AMateria *m)
{
	int	idx;

	for (idx = 0 ; idx < 4 && this->_inventory[idx] ; ++idx);
	std::cout
	<< "Character "
	<< this->_name;
	if (idx < 4)
	{
		std::cout
		<< " equips "
		<< m->getType()
		<< std::endl;
		_inventory[idx] = m;
	}
	else
		std::cout
		<< " has no free space left"
		<< std::endl;
}

void	Character::unequip(int idx)
{
	if (this->_inventory[idx])
		std::cout
		<< "Character "
		<< this->_name
		<< " unequips "
		<< this->_inventory[idx]->getType()
		<< std::endl;
	this->_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
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
	int	i;

	o << "Character:" << std::endl
	<< "\t" "name: " << rhs.getName() << std::endl
	<< "\t" "inventory: " << std::endl;
	for (i = 0 ; i < 4 ; ++i)
		if (rhs.isFilled(i))
			o << "\t\t" "[" << i << "] " << rhs.getSlotType(i) << std::endl;
		else
			o << "\t\t" "[" << i << "] " << "empty" << std::endl;
	return o;
}
