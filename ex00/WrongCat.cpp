/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 20:07:01 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/05/18 20:59:07 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "Primitive WrongCat constructor have been used" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const std::string &type) {
	std::cout << "Type WrongCat constructor have been used" << std::endl;
	this->_type = type;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor have been used" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy){
	*this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat &src){
	this->_type = src._type;
	return *this;
}

void WrongCat::makeSound() const{
	std::cout << "A " << this->getType() << " says Myauuuu (in a wrong way)" << std::endl;
}