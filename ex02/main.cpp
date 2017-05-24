/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 08:48:26 by mmoliele          #+#    #+#             */
/*   Updated: 2017/05/24 17:34:37 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int	main(void)
{
	Zombie *x = new Zombie("Joy", "Walker");	
	x->announce();
	delete x;

	ZombieEvent *zE = new ZombieEvent();
	zE->setZombieType("Loser");

	Zombie *z3 = zE->randomChump();
	delete zE;
	delete z3;

	return (0);
}
