/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 05:35:55 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/29 06:32:10 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "class/ICharacter.hpp"

class AMateria
{
protected:
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
	virtual AMateria	*clone(void) const = 0;
	virtual void		use(ICharacter &target);

	// Operator overloads
	AMateria	&operator=(AMateria const &rhs);
};

std::ostream	&operator<<(std::ostream &o, AMateria const &rhs);

#endif
