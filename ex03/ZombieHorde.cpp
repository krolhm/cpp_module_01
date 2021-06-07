/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 18:41:01 by rbourgea          #+#    #+#             */
/*   Updated: 2021/06/07 19:12:03 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

std::string	randomName(void)
{
	std::string names [] = {"Zaar", "Kruk", "Wyv", "Slurk", "Tsinn"};
	return names[std::rand() % 5];
}

ZombieHorde::ZombieHorde(int n)
{
    _n = n;
	_Horde = new Zombie[n];

    for (int i = 0; i < n; i++)
    {
		_Horde[i].setName(randomName());
		_Horde[i].setType("Common");
	}
}

ZombieHorde::~ZombieHorde()
{
    delete [] _Horde;
}

void	ZombieHorde::announce(void)
{
	for (int i = 0; i < _n; i++)
	{
		_Horde[i].announce();
	}
}