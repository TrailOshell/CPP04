/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 13:49:41 by tsomchan          #+#    #+#             */
/*   Updated: 2025/09/29 16:49:22 by tsomchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
	if (DEBUG_MODE != 0) std::cout << GRN "🐕 Dog default constructor called" NCL << std::endl;
	this->_type = "Dog";
}

Dog::Dog(const Dog &copy): Animal()
{
	if (DEBUG_MODE != 0) std::cout << GRN "🐕 Dog copy constructor called" NCL << std::endl;
	*this = copy;
}

Dog::~Dog()
{ if (DEBUG_MODE != 0) std::cout << RED "🐕 Dog default destructor called" NCL << std::endl; }

Dog &Dog::operator=(const Dog &src)
{
	if (DEBUG_MODE != 0) std::cout << YLW "🐕 Dog overloaded operator= called" NCL << std::endl;
	this->_type = src._type;
	return (*this);
}

void Dog::makeSound()const
{
	std::cout << YLW "Bork 🥎🐕" << std::endl;
}