/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 08:48:09 by mmoliele          #+#    #+#             */
/*   Updated: 2017/05/24 17:18:38 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H
# include "Zombie.hpp"
class	ZombieEvent
{
	public:
		void		setZombieType(std::string type);
		Zombie*		newZombie(std::string);
		Zombie*		randomChump();

	private:
		std::string _type;
};

#endif
