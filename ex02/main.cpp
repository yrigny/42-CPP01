/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 17:56:30 by yrigny            #+#    #+#             */
/*   Updated: 2024/06/25 18:08:12 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void) {
	std::string	    s = "HI THIS IS BRAIN";
	std::string*	stringPTR = &s;
	std::string&	stringREF = s;
	std::cout << "memory address of the string    : " << &s << std::endl;
	std::cout << "memery address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "memory address held by stirngREF: " << &stringREF << std::endl;
    std::cout << "value of the string          : " << s << std::endl;
    std::cout << "value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "value pointed to by stringREF: " << stringREF << std::endl;
	return 0;
}
