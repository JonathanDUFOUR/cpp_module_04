/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 07:00:04 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/29 09:38:14 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	AMateria	*_inventory[4];

protected:

public:
	// Constructors
	Character(void);
	Character(Character const &src);
	Character(std::string const name);

	// Destructors
	virtual ~Character(void);

	// Accessors
	std::string const	&getName(void) const;

	// Member functions
	void	equip(AMateria *m);
	void	unequip(int idx);
	void	use(int idx, ICharacter &target);

	// Operator overloads
	Character	&operator=(Character const &rhs);
};

std::ostream	&operator<<(std::ostream &o, Character const &rhs);

#endif
