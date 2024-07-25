/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsuki2 <minsuki2@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:13:18 by minsuki2          #+#    #+#             */
/*   Updated: 2022/12/07 20:05:07 by minsuki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
# include <bitset>	// linux c++11


int	main(void) {

	Fixed	a;
	std::cout << std::endl;
	Fixed	b(a);
	std::cout << std::endl;
	Fixed	c;
	std::cout << std::endl;


	std::cout << std::endl;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	a.setRawBits(3);
	b.setRawBits(4);
	c.setRawBits(5);

	a = c;

	// std::cerr << "b_bit    : " << std::bitset<32>(b_bit) << MSG_ENDL;

	std::cout << std::bitset<32>(a.getRawBits()) << std::endl;
	std::cout << std::bitset<32>(b.getRawBits()) << std::endl;
	std::cout << std::bitset<32>(c.getRawBits()) << std::endl;

	return 0;
}
