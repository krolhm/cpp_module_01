/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 17:42:18 by rbourgea          #+#    #+#             */
/*   Updated: 2021/06/07 18:34:27 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(std::string type)
{
	_type = type;
}

ZombieEvent::~ZombieEvent()
{

}

void	ZombieEvent::setZombieType(std::string type)
{
	_type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	return new Zombie(name, _type);
}

void	ZombieEvent::randomChump(void)
{
	std::string names[] = {"Zaar", "Kruk", "Wyv", "Slurk", "Tsinn"};

	Zombie Z = Zombie(names[std::rand() % 5], _type);
	Z.announce();
}