/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 13:49:41 by tsomchan          #+#    #+#             */
/*   Updated: 2025/09/28 14:08:00 by tsomchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
	_type = "Dog";
}

Dog::~Dog()
{
}

void Dog::makeSound()const
{
	std::cout << PUR "Bork" << std::endl;
}