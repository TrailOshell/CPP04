/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 13:49:38 by tsomchan          #+#    #+#             */
/*   Updated: 2025/07/17 14:15:11 by tsomchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): Animal()
{
}

WrongCat::~WrongCat()
{
}

void WrongCat::makeSound()
{
	std::cout << PUR "4203" << std::endl;
}