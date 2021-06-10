/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 20:23:44 by rbourgea          #+#    #+#             */
/*   Updated: 2021/06/10 17:27:43 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human
{
    public:
        Human(int _neurons = 0, int _hormones = 0);
        ~Human();
        std::string identify(void) const;
        Brain & getBrain(void);

    private:
        Brain const _HBrain;
};

#endif