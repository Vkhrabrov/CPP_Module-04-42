/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:43:51 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/05/18 20:18:40 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Primitive Dog constructor have been used" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(const std::string &type) {
	std::cout << "Type Dog constructor have been used" << std::endl;
	this->_type = type;
}

Dog::~Dog() {
	std::cout << "Dog destructor have been used" << std::endl;
}

Dog::Dog(const Dog& copy){
	*this = copy;
}

Dog &Dog::operator=(const Dog &src){
	this->_type = src._type;
	return *this;
}

void Dog::makeSound() const{
	std::cout << "A " << this->getType() << " says bark, bark!" << std::endl;
}