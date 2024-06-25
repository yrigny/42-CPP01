/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:17:01 by yrigny            #+#    #+#             */
/*   Updated: 2024/06/25 16:17:03 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
    Zombie  randomChump("Foo");
    Zombie  *bar = newZombie("Bar");
    if (!bar)
        return 1;
    for (int i = 0; i < 5; i++)
        bar->announce();
    delete bar;
    return 0;
}
