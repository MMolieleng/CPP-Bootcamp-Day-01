/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 16:06:38 by mmoliele          #+#    #+#             */
/*   Updated: 2017/05/24 18:07:07 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H
# include "Brain.hpp"

class Human
{
	public:
		Human();
//		~Human();

		std::string	identify() const;
		const Brain& getBrain() const;	

	private:
		const	Brain _brain;
};
#endif

