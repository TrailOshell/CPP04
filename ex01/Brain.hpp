/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 17:58:22 by tsomchan          #+#    #+#             */
/*   Updated: 2025/09/29 19:39:41 by tsomchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "Animal.hpp"
# include <iostream>

class Brain
{
	private:
		std::string _ideas[100];
	public:
		Brain();
		Brain(const Brain &copy);
		~Brain();

		Brain &operator=(const Brain &src);

		std::string	getIdea(int index);
		void setIdea(int index, std::string idea);
		
};

void	get_n_ideas(Brain *brain, int n);
void	brain_dialogue(std::string color, Brain *brain, int *index);

#endif