/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 05:35:55 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/20 19:02:43 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "class/ICharacter.hpp"

# ifndef DEBUG
#  define DEBUG 0
# endif

class ICharacter;

class AMateria
{
protected:
	// Attributes
	std::string	_type;

public:
	// Constructors
	AMateria(std::string const &type = std::string("defaultType"));
	AMateria(AMateria const &src);

	// Destructors
	virtual ~AMateria(void);

	// Accessors
	std::string const	&getType(void) const;

	// Member functions
	virtual void		use(ICharacter &target);

	virtual AMateria	*clone(void) const = 0;

	// Operators
	AMateria	&operator=(AMateria const &rhs);
};

std::ostream	&operator<<(std::ostream &o, AMateria const &rhs);

#endif
