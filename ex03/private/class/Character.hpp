/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 07:00:04 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/07 03:50:39 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "class/ICharacter.hpp"

class Character : public ICharacter
{
private:
	// Attributes
	std::string	_name;
	AMateria	*_inventory[4];

public:
	// Constructors
	Character(void);
	Character(Character const &src);
	Character(std::string const name);

	// Destructors
	virtual ~Character(void);

	// Accessors
	std::string const	&getName(void) const;
	std::string const	&getSlotType(int const idx) const;

	AMateria			*getSlot(int const idx) const;

	// Member functions
	void	equip(AMateria *m);
	void	unequip(int idx);
	void	use(int idx, ICharacter &target);

	bool	isFilled(int const idx) const;

	// Operators
	Character	&operator=(Character const &rhs);
};

std::ostream	&operator<<(std::ostream &o, Character const &rhs);

#endif
