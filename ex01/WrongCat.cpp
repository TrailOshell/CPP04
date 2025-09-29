/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 13:49:38 by tsomchan          #+#    #+#             */
/*   Updated: 2025/09/29 16:43:44 by tsomchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): Animal()
{ if (DEBUG_MODE != 0) std::cout << GRN "🐈 WrongCat default constructor called" NCL << std::endl; }

WrongCat::WrongCat(const WrongCat &copy)
{
	if (DEBUG_MODE != 0) std::cout << GRN "🐈 WrongCat copy constructor called" NCL << std::endl;
	*this = copy;
}

WrongCat::~WrongCat()
{ if (DEBUG_MODE != 0) std::cout << RED "🐈 WrongCat default destructor called" NCL << std::endl; }

WrongCat &WrongCat::operator=(const WrongCat &src)
{
	if (DEBUG_MODE != 0) std::cout << YLW "🐈 WrongCat overloaded operator= called" NCL << std::endl;
	this->_type = src._type;
	return (*this);
}

void WrongCat::makeSound()const
{
	std::cout << PUR "77101111119" << std::endl;
}