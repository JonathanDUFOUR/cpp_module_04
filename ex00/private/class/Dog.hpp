/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 20:33:34 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/20 18:59:55 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "class/Animal.hpp"

# ifndef DEBUG
#  define DEBUG 0
# endif

class Dog : public Animal
{
public:
	// Constructors
	Dog(void);
	Dog(Dog const &src);

	// Destructors
	virtual ~Dog(void);

	// Member functions
	virtual void	makeSound(void) const;

	// Operators
	Dog	&operator=(Dog const &rhs);
};

std::ostream	&operator<<(std::ostream &o, Dog const &rhs);

#endif
