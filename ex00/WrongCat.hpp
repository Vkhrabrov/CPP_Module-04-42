/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 20:07:11 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/05/18 21:11:53 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{

	public:
		WrongCat();
		WrongCat(const std::string &type);
		~WrongCat();
		WrongCat(const WrongCat& copy);

		void makeSound() const;
		
		WrongCat &operator=(const WrongCat &src);

};

#endif