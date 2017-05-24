/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 08:48:16 by mmoliele          #+#    #+#             */
/*   Updated: 2017/05/24 17:20:06 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <stdlib.h>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie*	newZ = new Zombie(name, this->_type);
	return (newZ);
}

Zombie*	ZombieEvent::randomChump()
{
	srand((unsigned int)time(NULL));
	int index;
	
	index = rand() % 4;

	std::string names[] = {"Thulasizwe","Zamani","Reuben","Alex"};

	std::string name = names[index];

	Zombie* z = newZombie(name);
	z->announce();
	return (z);
}
