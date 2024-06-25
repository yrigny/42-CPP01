/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:25:43 by yrigny            #+#    #+#             */
/*   Updated: 2024/06/25 18:38:58 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	this->type = type;
	return;
}

Weapon::~Weapon(void) {
	return;
}

const std::string&	Weapon::getType(void) {
	return this->type;
}

void				Weapon::setType(std::string type) {
	this->type = type;
}

