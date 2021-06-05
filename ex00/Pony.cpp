/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 10:38:47 by rbourgea          #+#    #+#             */
/*   Updated: 2021/06/05 17:56:09 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, int size, int age)
{
	_name = name;
	_size = size;
	_age = age;
	std::cout << "A pony has just appeared! He's called " << _name << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "The pony is escaped !" << std::endl;
}

void	Pony::feed(void)
{
	std::cout << _name << " eat an apple !" << std::endl;
}

void	Pony::walk(void)
{
	std::cout << _name << " eat walk quietly." << std::endl;
}

void	Pony::sleep(void)
{
	std::cout << _name << " sleep." << std::endl;
}