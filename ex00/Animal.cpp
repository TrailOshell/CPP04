/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 13:49:36 by tsomchan          #+#    #+#             */
/*   Updated: 2025/07/17 14:08:36 by tsomchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
}

Animal::Animal(std::string type)
{
}

Animal::~Animal()
{
}

std::string Animal::getType()
{
	return (this->_type);
}

void Animal::makeSound()
{
	std::cout << PUR "The voice of unknown beast cried out" << std::endl;
}
