/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 16:34:17 by rbourgea          #+#    #+#             */
/*   Updated: 2021/06/07 18:30:40 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
    _name = name;
    _type = type;
}

Zombie::~Zombie()
{

}

void Zombie::announce(void)
{
    std::cout << "<" << _name << " (" << _type << ")> Braiiiiiiinnnssss ..." << std::endl;
}
