/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 06:09:12 by jodufour          #+#    #+#             */
/*   Updated: 2022/03/02 19:38:32 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
# include "class/AMateria.hpp"

# ifndef DEBUG
#  define DEBUG 0
# endif

typedef unsigned int	uint;

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
	virtual void	unequip(uint const idx) = 0;
	virtual void	use(uint const idx, ICharacter &target) = 0;

	// Operators
	ICharacter	&operator=(ICharacter const &rhs);
};

#endif
