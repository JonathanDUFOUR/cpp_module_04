/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 05:35:55 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/29 05:37:38 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class AMateria
{
protected:

public:
	// Constructors
	AMateria(void);
	AMateria(AMateria const &src);

	// Destructors
	virtual ~AMateria(void);

	// Accessors

	// Operator overloads
	AMateria	&operator=(AMateria const &rhs);
};

std::ostream	&operator<<(std::ostream &o, AMateria const &rhs);

#endif
