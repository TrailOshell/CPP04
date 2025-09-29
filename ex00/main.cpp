/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 13:49:27 by tsomchan          #+#    #+#             */
/*   Updated: 2025/09/29 16:45:47 by tsomchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	//...

	if (DEBUG_MODE != 0)
	{
		std::cout << PUR "||| " CYN"Constructor test" PUR" |||" NCL << std::endl;
		
		std::cout << PUR "||| " CYN"Animal test" PUR" |||" NCL << std::endl;
		Animal animal;
		Animal copy_animal(animal);
		Animal assign_animal;
		assign_animal = animal;

		std::cout << PUR "||| " CYN"Cat test" PUR" |||" NCL << std::endl;
		Cat cat;
		Cat copy_cat(cat);
		Cat assign_cat;
		assign_cat = cat;
		
		std::cout << PUR "||| " CYN"Dog test" PUR" |||" NCL << std::endl;
		Dog dog;
		Dog copy_dog(dog);
		Dog assign_dog;
		assign_dog = dog;
	}

	return (0);
}