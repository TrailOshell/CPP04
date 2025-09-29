/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 13:49:36 by tsomchan          #+#    #+#             */
/*   Updated: 2025/09/29 15:27:39 by tsomchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
}

Animal::Animal(const Animal &type)
{
	*this = type;
}

Animal::~Animal()
{
	
}

Animal &Animal::operator=(const Animal &src)
{
	this->_type = src._type;
	return (*this);
}

std::string Animal::getType()const
{
	return (this->_type);
}

void Animal::makeSound()const
{
	std::cout << PUR "The voice of unknown beast cried out" << std::endl;
}
