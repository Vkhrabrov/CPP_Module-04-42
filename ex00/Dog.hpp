/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:43:54 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/05/18 20:17:25 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{

	public:
	Dog();
	Dog(const std::string &type);
	~Dog();
	Dog(const Dog& copy);
	
	Dog &operator=(const Dog &src);

	void makeSound() const;
};

#endif