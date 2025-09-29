/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 13:49:37 by tsomchan          #+#    #+#             */
/*   Updated: 2025/09/29 17:08:14 by tsomchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "Animal.hpp"

class WrongCat: public Animal
{
	public:
		WrongCat();
		WrongCat(const WrongCat &copy);
		~WrongCat();

		WrongCat &operator=(const WrongCat &src);

		void makeSound(void)const;
};

#endif