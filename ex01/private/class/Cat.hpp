/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 20:33:49 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/20 19:00:40 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "class/Animal.hpp"
# include "class/Brain.hpp"

# ifndef DEBUG
#  define DEBUG 0
# endif

class Cat : public Animal
{
private:
	// Attributes
	Brain	*_mind;

public:
	// Constructors
	Cat(void);
	Cat(Cat const &src);

	// Destructors
	virtual ~Cat(void);

	// Accessors
	Brain const	&getMind(void) const;

	// Member functions
	virtual void	makeSound(void) const;

	// Operators
	Cat	&operator=(Cat const &rhs);
};

std::ostream	&operator<<(std::ostream &o, Cat const &rhs);

#endif
