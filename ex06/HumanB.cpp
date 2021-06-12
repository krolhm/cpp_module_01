/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 17:32:48 by rbourgea          #+#    #+#             */
/*   Updated: 2021/06/11 15:20:37 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{

}

HumanB::~HumanB()
{
    
}

void HumanB::attack()
{
    std::cout << _name << " attacks with his " << (*_weapon_type).getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon_type)
{
    _weapon_type = &weapon_type;
}