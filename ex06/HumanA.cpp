/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 17:32:46 by rbourgea          #+#    #+#             */
/*   Updated: 2021/06/11 16:19:33 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon_type) : _weapon_type(weapon_type), _name(name)
{

}

HumanA::~HumanA()
{

}

void HumanA::attack()
{
    std::cout << _name << " attacks with his " << _weapon_type.getType() << std::endl;
}
