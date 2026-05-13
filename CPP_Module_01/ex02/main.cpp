/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 19:48:10 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/05/13 21:06:39 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void){
	std::string str1="HI THIS IS BRAIN";
	std::string* stringPTR = &str1;
	std::string& stringREF = str1;
	std::cout << &str1 << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl << std::endl;
	std::cout << str1 << std::endl << *stringPTR << std::endl <<  stringREF << std::endl;
}