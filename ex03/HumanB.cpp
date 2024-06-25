/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:26:43 by yrigny            #+#    #+#             */
/*   Updated: 2024/06/25 18:26:44 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
    this->name = name;
    this->weapon = NULL;
    return;
}

HumanB::~HumanB(void) {
    return;
}

void    HumanB::setWeapon(Weapon& weapon) {
    this->weapon = &weapon;
}

void	HumanB::attack() {
    if (this->weapon)
	    std::cout << this->name << " attacks with their " << (*this->weapon).getType() << std::endl;
    else
        std::cout << this->name << " has no weapon to attack with!" << std::endl;
}
