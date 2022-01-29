/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 06:21:40 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/29 06:47:30 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{
private:

protected:

public:
	// Constructors
	Cure(void);
	Cure(Cure const &src);

	// Destructors
	virtual ~Cure(void);

	// Member functions
	AMateria	*clone(void) const;
	void		use(ICharacter &target);

	// Operator overloads
	Cure	&operator=(Cure const &rhs);
};

std::ostream	&operator<<(std::ostream &o, Cure const &rhs);

#endif
