/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 09:41:58 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/20 19:03:23 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "class/AMateria.hpp"

# ifndef DEBUG
#  define DEBUG 0
# endif

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

	// Operators
	IMateriaSource	&operator=(IMateriaSource const &rhs);
};

#endif
