/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 13:49:39 by tsomchan          #+#    #+#             */
/*   Updated: 2025/09/29 17:07:47 by tsomchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{ if (DEBUG_MODE != 0) std::cout << GRN "WrongAnimal default constructor called" NCL << std::endl; }

WrongAnimal::WrongAnimal(const WrongAnimal&copy)
{
	if (DEBUG_MODE != 0) std::cout << GRN "WrongAnimal copy constructor called" NCL << std::endl;
	*this = copy;
}

WrongAnimal::~WrongAnimal()
{ if (DEBUG_MODE != 0) std::cout << RED "WrongAnimal default destructor called" NCL << std::endl; }

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
	if (DEBUG_MODE != 0) std::cout << YLW "WrongAnimal overloaded operator= called" NCL << std::endl;
	this->_type = src._type;
	return (*this);
}

std::string WrongAnimal::getType()const
{
	return (this->_type);
}

void WrongAnimal::makeSound()const
{
	std::cout << PUR "The voice of this beast sounds suspiciously wrong" << std::endl;
}
