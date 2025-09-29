/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomchan <tsomchan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 13:49:27 by tsomchan          #+#    #+#             */
/*   Updated: 2025/09/29 18:50:08 by tsomchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	//...
	
	std::cout << PUR "The cats and dogs roam free" NCL << std::endl;
	const Animal	*a[6];
	for (int index = 0; index < 6; index++)
	{
		if (index % 2)
			a[index] = new Cat();
		else
			a[index] = new Dog();
	}
	
	std::cout << PUR "The cats and dogs annouce themself" NCL << std::endl;
	for (int index = 0; index < 6; index++)
		std::cout << "I'm " << a[index]->getType() << std::endl;

	std::cout << PUR "The cats and dogs bickers" NCL << std::endl;
	for (int index = 0; index < 6; index++)
		a[index]->makeSound();
	
	std::cout << PUR "The cats and dogs left the scene" NCL << std::endl;
	for (int index = 0; index < 6; index++)
		delete (a[index]);

	if (DEBUG_MODE != 0)
	{
		std::cout << PUR "Mind opening session" NCL << std::endl;

		Cat c;
		Brain *cat_brain;
		cat_brain = c.getBrain();

		Dog d;
		Brain *dog_brain;
		dog_brain = d.getBrain();
	
		std::cout << PUR "Test 5 cat ideas" NCL << std::endl;
		cat_brain->setIdea(0, "fish");
		cat_brain->setIdea(1, "ball");
		cat_brain->setIdea(2, "yarn");
		cat_brain->setIdea(3, "can");
		cat_brain->setIdea(4, "rat");
		std::cout << "first idea is " << cat_brain->getIdea(0) << std::endl;
		get_n_ideas(cat_brain, 5);


		std::cout << PUR "Test 3 dog ideas" NCL << std::endl;
		dog_brain->setIdea(0, "meat");
		dog_brain->setIdea(1, "ball");
		dog_brain->setIdea(2, "stick");
		std::cout << "first idea is " << dog_brain->getIdea(0) << std::endl;
		get_n_ideas(dog_brain, 5);
		
		std::cout << PUR "Test setting 101th cat idea" NCL << std::endl;
		cat_brain->setIdea(100, "BURN");
	
		
		if (DEBUG_MODE >= 2)
		{
			std::cout << PUR "Test 100 cat ideas" NCL << std::endl;
			for (int index = 0; index < 100; index++)
			{
				if (index % 2)
					cat_brain->setIdea(index, "milk");
				else
					cat_brain->setIdea(index, "fish");
			}
			get_n_ideas(c.getBrain(), 100);
		}
	}

	return (0);
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
