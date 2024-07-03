/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:25:55 by yrigny            #+#    #+#             */
/*   Updated: 2024/06/25 18:52:15 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class	HumanA {

	private:

		std::string	name;
		Weapon&		weapon;

	public:

		HumanA(std::string name, Weapon& weapon);
		~HumanA(void);

		void	attack(void);
};

#endif
