/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 14:23:58 by mmoliele          #+#    #+#             */
/*   Updated: 2017/05/24 14:26:56 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
#define ZOMBIEHORDE_H
#include "Zombie.hpp"

class	ZombieHorde
{
	public:
		ZombieHorde(int);
		~ZombieHorde();

	private:
		Zombie *zombies;
};
#endif
