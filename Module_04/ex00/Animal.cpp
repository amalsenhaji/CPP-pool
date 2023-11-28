/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 17:31:21 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 18:28:16 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : _type( "Animel" ) {
    std::cout << this->_type << " constructor called" << std::endl;
}

Animal::Animal( std::string type ) : _type( type )
{
    std::cout << "Animal " << this->_type << " constructor called" << std::endl;
}

Animal::~Animal( void )
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal( const Animal& src )
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

Animal& Animal::operator=( const Animal& rhs )
{
    std::cout << "Animal assignment operator called" << std::endl;
    if ( this != &rhs ) {
        this->_type = rhs._type;
    }
    return *this;
}

void Animal::makeSound( void ) const
{
    std::cout << "Animal makeSound called" << std::endl;
}

std::string    Animal::getType( void ) const
{
    return this->_type;
}