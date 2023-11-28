/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 08:16:40 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 18:27:10 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define N 4

int main( void ) {
    Zombie *zombiz = zombieHorde(N, "zombi");

    for (size_t i = 0; i < N; i++) {
        zombiz[i].announce();
    }

    delete [] zombiz;
    return 0;
}