/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 06:20:40 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/30 17:08:19 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "class/AMateria.hpp"

class Ice : public AMateria
{
public:
	// Constructors
	Ice(void);
	Ice(Ice const &src);

	// Destructors
	virtual ~Ice(void);

	// Member functions
	void		use(ICharacter &target);

	AMateria	*clone(void) const;

	// Operator overloads
	Ice	&operator=(Ice const &rhs);
};

std::ostream	&operator<<(std::ostream &o, Ice const &rhs);

#endif
