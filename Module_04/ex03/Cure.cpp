/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:03:55 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 18:28:53 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure")
{
    // std::cout << "* Cure: materia is created *" << std::endl;
}

Cure::Cure( Cure const & src ) : AMateria("cure")
{
    *this = src;
    // std::cout << "* Cure: materia is copied *" << std::endl;
}

Cure&   Cure::operator=( const Cure& rhs ) {
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return *this;
}

Cure::~Cure()
{
    // std::cout << "* Ice: cure is destroyed *" << std::endl;
}

AMateria* Cure::clone() const
{
    return (new Cure(*this));
}

void    Cure::use( ICharacter& target )
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}


