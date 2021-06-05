/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 10:38:44 by rbourgea          #+#    #+#             */
/*   Updated: 2021/06/05 17:56:01 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>
#include <iomanip>

class Pony
{
	public:
		Pony(std::string name, int size, int age);
		~Pony(void);
		void feed(void);
		void walk(void);
		void sleep(void);
	private:
		std::string _name;
		int			_size;
		int			_age;
};

#endif