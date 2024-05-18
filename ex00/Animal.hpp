/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:42:23 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/05/18 20:18:09 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal{

	protected:
		std::string _type;

	public:
	Animal();
	Animal(const std::string &type);
	virtual ~Animal();
	Animal(const Animal& copy);

	std::string getType() const;
	virtual void makeSound() const;
	
	Animal &operator=(const Animal &src);
};

#endif