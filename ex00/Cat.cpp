/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 13:49:43 by tsomchan          #+#    #+#             */
/*   Updated: 2025/09/29 20:23:45 by tsomchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
	if (DEBUG_MODE != 0) std::cout << GRN "🐈 Cat default constructor called" NCL << std::endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat &copy): Animal()
{
	if (DEBUG_MODE != 0) std::cout << GRN "🐈 Cat copy constructor called" NCL << std::endl;
	*this = copy;
}

Cat::~Cat()
{ if (DEBUG_MODE != 0) std::cout << RED "🐈 Cat default destructor called" NCL << std::endl; }

Cat &Cat::operator=(const Cat &src)
{
	if (DEBUG_MODE != 0) std::cout << YLW "🐈 Cat overloaded operator= called" NCL << std::endl;
	this->_type = src._type;
	return (*this);
}

void Cat::makeSound()const
{
	std::cout << YLW "Meow 🧶🐈" NCL << std::endl;
}
