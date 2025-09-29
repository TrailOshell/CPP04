/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 13:49:36 by tsomchan          #+#    #+#             */
/*   Updated: 2025/09/29 18:13:13 by tsomchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	if (DEBUG_MODE != 0) std::cout << GRN "Animal default constructor called" NCL << std::endl;
	this->_type = "Animal";
}

Animal::Animal(const Animal &copy)
{
	if (DEBUG_MODE != 0) std::cout << GRN "Animal copy constructor called" NCL << std::endl;
	*this = copy;
}

Animal::~Animal()
{ if (DEBUG_MODE != 0) std::cout << RED "Animal default destructor called" NCL << std::endl; }

Animal &Animal::operator=(const Animal &src)
{
	if (DEBUG_MODE != 0) std::cout << YLW "Animal overloaded operator= called" NCL << std::endl;
	this->_type = src._type;
	return (*this);
}

std::string Animal::getType()const
{
	return (this->_type);
}

void Animal::makeSound()const
{
	std::cout << PUR "The voice of unknown beast cried out" NCL << std::endl;
}
