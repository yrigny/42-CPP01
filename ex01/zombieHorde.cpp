/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:19:54 by yrigny            #+#    #+#             */
/*   Updated: 2024/06/25 16:19:56 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    if (N <= 0) {
        std::cerr << "Error: horde size N must be a positive int" << std::endl;
        return NULL;
    }
    Zombie* horde = new Zombie[N];
    if (!horde)
        return NULL;
    for (int i = 0; i < N; i++)
        horde[i].nameZombie(name);
    return horde;
}
