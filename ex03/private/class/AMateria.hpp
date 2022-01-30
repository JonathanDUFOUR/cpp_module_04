/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 05:35:55 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/30 16:05:01 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "class/ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	// Attributes
	std::string	type;

public:
	// Constructors
	AMateria(void);
	AMateria(AMateria const &src);
	AMateria(std::string const &type);

	// Destructors
	virtual ~AMateria(void);

	// Accessors
	std::string const	&getType(void) const;

	// Member functions
	virtual void		use(ICharacter &target);

	virtual AMateria	*clone(void) const = 0;

	// Operator overloads
	AMateria	&operator=(AMateria const &rhs);
};

std::ostream	&operator<<(std::ostream &o, AMateria const &rhs);

#endif
