/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 20:56:08 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/05/18 21:14:08 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "Primitive WrongAnimal constructor have been used" << std::endl;
	this->_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const std::string &type) {
	std::cout << "Type WrongAnimal constructor have been used" << std::endl;
	this->_type = type;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor have been used" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy){
	*this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src){
	this->_type = src._type;
	return *this;
}

std::string WrongAnimal::getType() const{
	return _type;
}

void WrongAnimal::makeSound() const{
	std::cout << "A " << this->getType() << " says that something is wrong here..." << std::endl;
}

