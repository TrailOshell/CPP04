/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 13:49:27 by tsomchan          #+#    #+#             */
/*   Updated: 2025/09/29 17:52:48 by tsomchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal *cat = new Cat();
	Animal *dog = new Dog();

	cat->makeSound();
	dog->makeSound();

	print_message();

	if (DEBUG_MODE != 0)
	{
		Animal *animal;
		animal->makeSound();
	}

	return (0);
}

void	print_message()
{
	std::cout << PUR "------------------------------------------------------------------------------" NCL << std::endl;
	std::cout << CYN "If you try to call animal sound like this\n" NCL << std::endl;
	//std::cout << BLU "------------------------------------------------------------------------------" NCL << std::endl;
	std::cout << "Animal " CYN "*" NCL "animal" CYN ";" NCL " \n\
animal" CYN "->" NCL BLU "makeSound" PUR "()" CYN ";" NCL << std::endl;
	//std::cout << BLU "------------------------------------------------------------------------------" NCL << std::endl;
	std::cout << CYN "\nThen something like this will happen\n" NCL << std::endl;
	//std::cout << BLU "------------------------------------------------------------------------------" NCL << std::endl;
	std::cout << "main.cpp: In function ‘int " GRN "main" NCL "()’:\n\
main.cpp:XX:XX: " RED "error:" NCL " ‘animal’ is used uninitialized [" RED "-Werror=uninitialized" NCL "]\n\
   XX |                 " RED "animal->makeSound()" NCL ";\n\
      |                 " RED "~~~~~~~~~~~~~~~~~^~" NCL "\n\
main.cpp:XXkXX: " CYN "note:" NCL " ‘animal’ was declared here\n\
   XX |                 Animal *" CYN "animal" NCL ";\n\
      |                         " CYN "^~~~~~" NCL << std::endl;
	std::cout << PUR "------------------------------------------------------------------------------" NCL << std::endl;

	std::cout << CYN "In Animal.hpp, the consturctor Animal() is protected\n" NCL << std::endl;
	std::cout << "class Animal\n\
{\n\
	protected:\n\
		std::string _type;\n\
		Animal();\n\
	..." << std::endl;
	std::cout << PUR "------------------------------------------------------------------------------" NCL << std::endl;
}

void	get_n_ideas(Brain *brain, int n)
{
	if (DEBUG_MODE != 0) std::cout << YLW "🧠 get_n_ideas(" NCL << n << YLW ")" NCL << std::endl;
	if (n > 100 || n <= 0)
	{
		std::cout << YLW "number too big brain (number must be 1-100)" << std::endl;	
		return ;
	}

	int i = 0;
	while (i < n)
	{
		std::cout << BLU "idea #" CYN << i + 1 << " : " NCL << brain->getIdea(i) << std::endl;
		i++;
	}
}