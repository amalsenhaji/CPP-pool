/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 14:54:12 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 18:27:20 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type) {
    this->setType(type);
}

Weapon::~Weapon() {
}

const  std::string& Weapon::getType( void ) {
    return this->type;
}

void                Weapon::setType( std::string newType ) {
    this->type = newType;
}
