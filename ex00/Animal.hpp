/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 13:49:44 by tsomchan          #+#    #+#             */
/*   Updated: 2025/09/29 16:47:25 by tsomchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		Animal(const Animal &copy);
		~Animal();

		Animal &operator=(const Animal &src);
		
		virtual void makeSound(void)const;
		std::string getType()const;
};

# ifndef DEBUG_MODE
#  define DEBUG_MODE	0
# endif

# define NCL		"\033[0m"
# define BLK		"\033[0;30m"
# define RED		"\033[0;31m"
# define GRN		"\033[0;32m"
# define YLW		"\033[0;33m"
# define BLU		"\033[0;34m"
# define PUR		"\033[0;35m"
# define CYN		"\033[0;36m"
# define WHT		"\033[0;37m"

#endif