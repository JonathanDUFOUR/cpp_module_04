/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 06:20:40 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/20 19:03:17 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "class/AMateria.hpp"

# ifndef DEBUG
#  define DEBUG 0
# endif

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

	// Operators
	Ice	&operator=(Ice const &rhs);
};

std::ostream	&operator<<(std::ostream &o, Ice const &rhs);

#endif
