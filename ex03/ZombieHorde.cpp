/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 14:27:05 by mmoliele          #+#    #+#             */
/*   Updated: 2017/05/24 15:23:36 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	this->zombies = new Zombie[N];
	const char *names[] = {"Zamani", "Thulasizwe", "Jason", "John", "Alex"};
	int i = 0;
	int c;
	srand(time(NULL));
	c = rand() % 5;
	c = rand() % 5;
	c = rand() % 5;
	c = rand() % 5;
	while (i < N)
	{
		this->zombies[i]._type = "Walker";
		this->zombies[i]._name = names[rand() % 5];
		this->zombies[i].announce();
		i++;
	}
	return ;
}

ZombieHorde::~ZombieHorde(){
	delete []this->zombies;
}
