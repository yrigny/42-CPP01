/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:08:21 by yrigny            #+#    #+#             */
/*   Updated: 2024/07/02 16:08:22 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {
    return;
}

Harl::~Harl(void) {
    return;
}

void	Harl::setFilterLevel(std::string filter) {
	this->filterLevel = -1;
    std::string	levels[4] = {
		"DEBUG", "INFO", "WARNING", "ERROR"
	};
    for (int i = 0; i < 4; i++) {
        if (filter == levels[i])
            this->filterLevel = i;
    }
	if (this->filterLevel == -1)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void	Harl::complain(std::string level) {
	void	(Harl::*ptrTab[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	std::string	levels[4] = {
		"DEBUG", "INFO", "WARNING", "ERROR"
	};
	for (int i = 0; i < 4; i++) {
		if (level == levels[i])
			(this->*ptrTab[i])();
	}
} 

void    Harl::debug(void) {
	switch (this->filterLevel) {
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl << std::endl;
			break;
		default:
			break;
	}
}

void    Harl::info(void) {
	switch (this->filterLevel) {
		case 0:
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl << std::endl;
			break;
		default:
			break;
	}
    
}

void    Harl::warning(void) {
	switch (this->filterLevel) {
		case 0:
		case 1:
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl << std::endl;
			break;
		default:
			break;
	}
    
}

void    Harl::error(void) {
	switch (this->filterLevel) {
		case 0:
		case 1:
		case 2:
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
    		std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
			break;
		default:
			break;
	}
}
