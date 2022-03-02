/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 07:00:04 by jodufour          #+#    #+#             */
/*   Updated: 2022/03/02 19:38:40 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "class/ICharacter.hpp"

# ifndef DEBUG
#  define DEBUG 0
# endif

class Character : public ICharacter
{
private:
	// Attributes
	std::string	_name;
	AMateria	*_inventory[4U];

	static std::string const	_emptyType;

public:
	// Constructors
	Character(std::string const &name = std::string("defaultName"));
	Character(Character const &src);

	// Destructors
	virtual ~Character(void);

	// Accessors
	std::string const	&getName(void) const;
	std::string const	&getSlotType(uint const idx) const;

	AMateria			*getSlot(uint const idx) const;

	// Member functions
	void	equip(AMateria *m);
	void	unequip(uint const idx);
	void	use(uint const idx, ICharacter &target);

	// Operators
	Character	&operator=(Character const &rhs);
};

std::ostream	&operator<<(std::ostream &o, Character const &rhs);

#endif
