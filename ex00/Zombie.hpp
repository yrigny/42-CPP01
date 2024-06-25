/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:17:59 by yrigny            #+#    #+#             */
/*   Updated: 2024/06/25 16:18:04 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP
# include <iostream>

class Zombie {

    private:

        std::string name;

    public:

        Zombie(std::string name);
        ~Zombie(void);

        void    announce(void);
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif
