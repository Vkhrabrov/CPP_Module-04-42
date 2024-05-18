/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:43:34 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/05/18 20:15:00 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	this->_type = "Unknown Animal";
	std::cout << "Primitive Animal constructor have been used" << std::endl;
}

Animal::Animal(const std::string &type) {
	this->_type = type;
	std::cout << "Type Animal constructor have been used" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor have been used" << std::endl;
}

Animal::Animal(const Animal& copy){
	*this = copy;
}

Animal &Animal::operator=(const Animal &src){
	this->_type = src._type;
	return *this;
}

std::string Animal::getType() const {
	return _type;
}

void Animal::makeSound() const {
	// if (this->getType() == "Cat")
	// 	std::cout << "A " << this->getType() << " says Myauuuu" << std::endl;
	// else if (this->getType() == "Dog")
	// 	std::cout << "A " << this->getType() << " says bark, bark!" << std::endl;
	// else
		std::cout << "An " << this->getType() << " says that you should better leave unless you want your head chopped off..." << std::endl;
}