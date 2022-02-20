/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 07:00:04 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/20 19:35:47 by jodufour         ###   ########.fr       */
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
	std::string					_name;
	AMateria					*_inventory[4];

	static std::string const	_emptyType;

public:
	// Constructors
	Character(std::string const &name = std::string("defaultName"));
	Character(Character const &src);

	// Destructors
	virtual ~Character(void);

	// Accessors
	std::string const	&getName(void) const;
	std::string const	&getSlotType(int const idx) const;

	AMateria			*getSlot(int const idx) const;

	// Member functions
	void	equip(AMateria *m);
	void	unequip(int const idx);
	void	use(int const idx, ICharacter &target);

	// Operators
	Character	&operator=(Character const &rhs);
};

std::ostream	&operator<<(std::ostream &o, Character const &rhs);

#endif
