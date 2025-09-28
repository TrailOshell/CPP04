/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 13:49:39 by tsomchan          #+#    #+#             */
/*   Updated: 2025/09/28 14:03:17 by tsomchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
}

WrongAnimal::WrongAnimal(const WrongAnimal &type)
{
	*this = type;
}

WrongAnimal::~WrongAnimal()
{
}

std::string WrongAnimal::getType()
{
	return (this->_type);
}

void WrongAnimal::makeSound()
{
	std::cout << PUR "The voice of this beast sounds suspiciously wrong" << std::endl;
}
