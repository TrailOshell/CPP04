/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 17:58:20 by tsomchan          #+#    #+#             */
/*   Updated: 2025/09/29 13:32:18 by tsomchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{ if (DEBUG_MODE != 0) std::cout << GRN "🧠 Brain default constructor called" NCL << std::endl; }

Brain::Brain(const Brain &copy)
{
	if (DEBUG_MODE != 0) std::cout << RED "🧠 Brain copy constructor called" NCL << std::endl;
	*this = copy;
}

Brain::~Brain()
{ if (DEBUG_MODE != 0) std::cout << RED "🧠 Brain default destructor called" NCL << std::endl; }

Brain &Brain::operator=(const Brain &src)
{
	if (DEBUG_MODE != 0) std::cout << YLW "🧠🧠🧠 Brain overloaded operator= called" NCL << std::endl;
	for (int index = 0; index < 100; index++)
		this->_ideas[index] = src._ideas[index];
	return (*this);
}

std::string	Brain::getIdeas(int index)
{
	if (DEBUG_MODE != 0) std::cout << YLW "🧠 getIdeas()" NCL << std::endl;
	if (index < 100)
		return(this->_ideas[index]);
	else
		return (YLW "There is only 100 ideas per brain" NCL);
}

void	Brain::setIdea(int index, std::string idea)
{
	if (DEBUG_MODE != 0) std::cout << YLW "🧠 setIdea()" NCL << std::endl;
	if (index < 100)
		this->_ideas[index] = idea;
	else
		std::cout << YLW "There is only 100 ideas per brain" NCL << std::endl;
}