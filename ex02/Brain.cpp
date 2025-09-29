/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 17:58:20 by tsomchan          #+#    #+#             */
/*   Updated: 2025/09/29 16:31:08 by tsomchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{ if (DEBUG_MODE != 0) std::cout << GRN "🧠 Brain default constructor called" NCL << std::endl; }

Brain::Brain(const Brain &copy)
{
	if (DEBUG_MODE != 0) std::cout << GRN "🧠 Brain copy constructor called" NCL << std::endl;
	*this = copy;
}

Brain::~Brain()
{ if (DEBUG_MODE != 0) std::cout << RED "🧠 Brain default destructor called" NCL << std::endl; }

Brain &Brain::operator=(const Brain &src)
{
	if (DEBUG_MODE != 0) std::cout << YLW "🧠 Brain overloaded operator= called" NCL << std::endl;
	for (int index = 0; index < 100; index++)
		this->_ideas[index] = src._ideas[index];
	return (*this);
}

std::string	Brain::getIdea(int index)
{
	if (DEBUG_MODE != 0) std::cout << YLW "🧠 getIdea(" NCL << index << YLW ") " NCL;
	if (index >= 100 || index < 0)
		return (YLW "index too big brain (range must be 0-99)");	
	return (this->_ideas[index]);
}

void	Brain::setIdea(int index, std::string idea)
{
	if (DEBUG_MODE != 0) std::cout << YLW "🧠 setIdea(" NCL << index << ", " <<  idea << YLW ")" NCL << std::endl;
	if (index >= 100 || index < 0)
	{
		std::cout << YLW "Can't big brain more than 100 ideas (range must be 0-99)" NCL << std::endl;
		return ;
	}
	this->_ideas[index] = idea;
}
