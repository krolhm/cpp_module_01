/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 20:23:47 by rbourgea          #+#    #+#             */
/*   Updated: 2021/06/10 17:28:02 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(int neurons, int hormones) : _HBrain(Brain(neurons, hormones))
{
    
}

Human::~Human()
{
    
}

std::string Human::identify(void) const
{
    return (_HBrain.identify());
}

Brain & Human::getBrain(void)
{
    return ((Brain &)(_HBrain));
}