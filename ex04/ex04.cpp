/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 19:56:41 by rbourgea          #+#    #+#             */
/*   Updated: 2021/06/07 20:17:53 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string s = "HI THIS IS BRAIN";
	std::string *s_pointer = &s;
	std::string &s_reference = s;
	
	std::cout << "s with pointer: " << *s_pointer << std::endl;
	std::cout << "s with reference: " << s_reference << std::endl;
	return (0);
}