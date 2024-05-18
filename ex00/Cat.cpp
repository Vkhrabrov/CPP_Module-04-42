/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:43:43 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/05/18 20:16:57 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Primitive Cat constructor have been used" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(const std::string &type) {
	std::cout << "Type Cat constructor have been used" << std::endl;
	this->_type = type;
}

Cat::~Cat() {
	std::cout << "Cat destructor have been used" << std::endl;
}

Cat::Cat(const Cat& copy){
	*this = copy;
}

Cat &Cat::operator=(const Cat &src){
	this->_type = src._type;
	return *this;
}

void Cat::makeSound() const{
	std::cout << "A " << this->getType() << " says Myauuuu" << std::endl;
}