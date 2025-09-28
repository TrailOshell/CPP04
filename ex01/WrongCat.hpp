/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 13:49:37 by tsomchan          #+#    #+#             */
/*   Updated: 2025/09/28 14:23:36 by tsomchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "Animal.hpp"
# include <iostream>

class WrongCat: public Animal
{
	public:
		WrongCat();
		~WrongCat();
		void makeSound(void)const;
};

#endif