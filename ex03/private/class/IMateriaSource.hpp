/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 09:41:58 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/31 18:06:28 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <iostream>
# include "class/AMateria.hpp"

class AMateria;

class IMateriaSource
{
public:
	// Constructors
	IMateriaSource(void);
	IMateriaSource(IMateriaSource const &src);

	// Destructors
	virtual ~IMateriaSource(void);

	// Member functions
	virtual void		learnMateria(AMateria *m) = 0;

	virtual AMateria	*createMateria(std::string const &type) = 0;

	// Operator overloads
	IMateriaSource	&operator=(IMateriaSource const &rhs);
};

#endif
