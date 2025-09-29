/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 13:49:27 by tsomchan          #+#    #+#             */
/*   Updated: 2025/09/29 18:36:32 by tsomchan         ###   ########.fr       */
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
	
	std::cout << std::endl;
	std::cout << PUR "------------------------------------------------------------------------------" NCL << std::endl;
	std::cout << std::endl;
	
	std::cout << GRN "const " BLU"Animal" GRN"* animal = new " BLU"Animal" GRN"();" NCL << std::endl;
	const Animal* animal = new Animal();
	std::cout << animal->getType() << ": ";
	animal->makeSound();
	
	std::cout << std::endl;
	
	std::cout << GRN "const " YLW"Cat" GRN"* cat = new " YLW"Cat" GRN"();" NCL << std::endl;
	const Cat* cat = new Cat();
	std::cout << cat->getType() << ": ";
	cat->makeSound();
	
	std::cout << std::endl;

	std::cout << GRN "const " BLU"Animal" GRN"* normal_cat = new " YLW"Cat" GRN"();" NCL << std::endl;
	const Animal* normal_cat = new Cat();
	std::cout << normal_cat->getType() << ": ";
	normal_cat->makeSound();
	
	std::cout << std::endl;
	std::cout << PUR "------------------------------------------------------------------------------" NCL << std::endl;
	std::cout << std::endl;

	std::cout << GRN "const " BLU"WrongAnimal" GRN"* wronganimal = new " BLU"WrongAnimal" GRN"();" NCL << std::endl;
	const WrongAnimal* wronganimal = new WrongAnimal();
	std::cout << wronganimal->getType() << ": ";
	wronganimal->makeSound();

	std::cout << std::endl;

	std::cout << GRN "const " YLW"WrongCat" GRN"* wrongcat = new " YLW"WrongCat" GRN"();" NCL << std::endl;
	const WrongCat* wrongcat = new WrongCat();
	std::cout << wrongcat->getType() << ": ";
	wrongcat->makeSound();
	
	std::cout << std::endl;

	std::cout << GRN "const " BLU"WrongAnimal" GRN"* weird_cat = new " YLW"WrongCat" GRN"();" NCL << std::endl;
	const WrongAnimal* weird_cat = new WrongCat();
	std::cout << weird_cat->getType() << ": ";
	weird_cat->makeSound();

	std::cout << std::endl;
	std::cout << PUR "------------------------------------------------------------------------------" NCL << std::endl;

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