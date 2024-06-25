/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:25:29 by yrigny            #+#    #+#             */
/*   Updated: 2024/06/25 18:35:43 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class	Weapon {

	private:

		std::string	type;

	public:

		Weapon(std::string type);
		~Weapon(void);

		const std::string&	getType(void);
		void				setType(std::string type);
};

#endif
