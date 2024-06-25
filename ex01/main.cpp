/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:19:19 by yrigny            #+#    #+#             */
/*   Updated: 2024/06/25 16:19:23 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
    Zombie* horde = zombieHorde(HORDESIZE, "foo");
    if (!horde)
        return 1;
    for (int i = 0; i < HORDESIZE; i++)
        horde[i].announce();
    delete[] horde;
    return 0;
}
