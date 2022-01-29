/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 06:20:40 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/29 06:46:55 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{
private:

protected:

public:
	// Constructors
	Ice(void);
	Ice(Ice const &src);

	// Destructors
	virtual ~Ice(void);

	// Member functions
	AMateria	*clone(void) const;
	void		use(ICharacter &target);

	// Operator overloads
	Ice	&operator=(Ice const &rhs);
};

std::ostream	&operator<<(std::ostream &o, Ice const &rhs);

#endif
