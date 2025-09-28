/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 13:49:43 by tsomchan          #+#    #+#             */
/*   Updated: 2025/09/28 18:06:53 by tsomchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
	this->_type = "Cat";
	new Brain();
}

Cat::~Cat()
{
	delete _brain;
}

void Cat::makeSound()const
{
	std::cout << YLW "Meow 🧶🐈" << std::endl;
}
