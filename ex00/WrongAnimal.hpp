/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 20:11:06 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/05/18 21:14:02 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal{
	protected:
		std::string _type;

	public:
	WrongAnimal();
	WrongAnimal(const std::string &type);
	~WrongAnimal();
	WrongAnimal(const WrongAnimal& copy);

	std::string getType() const;
	void makeSound() const;
	
	WrongAnimal &operator=(const WrongAnimal &src);

};

#endif