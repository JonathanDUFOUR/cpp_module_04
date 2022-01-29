/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 20:33:49 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/29 01:59:50 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
private:

protected:

public:
	// Constructors
	Cat(void);
	Cat(Cat const &src);

	// Destructors
	virtual ~Cat(void);

	// Member functions
	void	makeSound(void) const;

	// Operator overloads
	Cat	&operator=(Cat const &rhs);
};

std::ostream	&operator<<(std::ostream &o, Cat const &rhs);

#endif
