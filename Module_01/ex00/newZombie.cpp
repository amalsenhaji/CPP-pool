/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:11:45 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 18:27:07 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// It creates a zombie, name it, and return it so you can use it outside of the function scope.
Zombie *newZombie( std::string name ) {
    return (new Zombie( name ));
}
