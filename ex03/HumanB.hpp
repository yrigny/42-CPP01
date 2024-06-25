/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:26:34 by yrigny            #+#    #+#             */
/*   Updated: 2024/06/25 18:26:35 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class	HumanB {

	private:
	
		std::string	name;
		Weapon*		weapon;

	public:

		HumanB(std::string name);
		~HumanB(void);

        void    setWeapon(Weapon& weapon);
		void	attack(void);
};

#endif
