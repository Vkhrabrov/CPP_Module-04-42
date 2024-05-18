/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:43:48 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/05/18 20:16:51 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{

	public:
	Cat();
	Cat(const std::string &type);
	~Cat();
	Cat(const Cat& copy);
	
	Cat &operator=(const Cat &src);

	void makeSound() const;
};

#endif