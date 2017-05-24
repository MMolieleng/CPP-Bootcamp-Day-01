/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 16:11:41 by mmoliele          #+#    #+#             */
/*   Updated: 2017/05/24 18:04:08 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() : _brain(Brain())
{
}

const	Brain& Human::getBrain() const
{
	return this->_brain;
}

std::string	Human::identify() const
{
	return	_brain.identify();
}
