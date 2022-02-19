/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 06:09:12 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/18 09:31:31 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
# include "class/AMateria.hpp"

# ifndef DEBUG
#  define DEBUG 0
# endif

class AMateria;

class ICharacter
{
public:
	// Constructors
	ICharacter(void);
	ICharacter(ICharacter const &src);

	// Destructors
	virtual ~ICharacter(void);

	// Accessors
	virtual std::string const	&getName(void) const = 0;

	// Member functions
	virtual void	equip(AMateria *m) = 0;
	virtual void	unequip(int idx) = 0;
	virtual void	use(int idx, ICharacter &target) = 0;

	// Operators
	ICharacter	&operator=(ICharacter const &rhs);
};

#endif
