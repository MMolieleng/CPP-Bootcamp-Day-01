/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 08:47:42 by mmoliele          #+#    #+#             */
/*   Updated: 2017/05/24 17:23:45 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
}

void	Zombie::announce()
{
	std::cout <<"<"<<this->_name<<" ("<<this->_type<<")> Braiiiiiiiiiinnnsssss...."<<std::endl;
}

Zombie::~Zombie()
{
	std::cout <<"<"<<this->_name<<" ("<<this->_type<<")> Just died...."<<std::endl;
}
