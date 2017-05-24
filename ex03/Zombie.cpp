/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 08:47:42 by mmoliele          #+#    #+#             */
/*   Updated: 2017/05/24 15:12:38 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::Zombie(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
	std::cout <<"<"<<this->_name<<" ( "<<this->_type<<" )> has been created"<<std::endl;
}

void	Zombie::announce()
{
	std::cout <<"<"<<this->_name<<" ("<<this->_type<<")> Braiiiiiiiiiinnnsssss...."<<std::endl;
}

Zombie::~Zombie()
{
	std::cout <<"<"<<this->_name<<" ("<<this->_type<<")> Just died....\343\230\272"<<std::endl;
}
