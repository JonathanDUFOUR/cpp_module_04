/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 06:21:40 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/20 19:03:13 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "class/AMateria.hpp"

# ifndef DEBUG
#  define DEBUG 0
# endif

class Cure : public AMateria
{
public:
	// Constructors
	Cure(void);
	Cure(Cure const &src);

	// Destructors
	virtual ~Cure(void);

	// Member functions
	void		use(ICharacter &target);

	AMateria	*clone(void) const;

	// Operators
	Cure	&operator=(Cure const &rhs);
};

std::ostream	&operator<<(std::ostream &o, Cure const &rhs);

#endif
