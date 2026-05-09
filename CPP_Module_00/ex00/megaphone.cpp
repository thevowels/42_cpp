/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 14:45:05 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/05/06 15:03:30 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int main(int argc, char *argv[]) {

    if(argc < 2){
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else{
        for(int i = 1; i < argc; i++){
            std::string str(argv[i]);
            for(size_t j = 0; j < str.length(); j++){
                str[j] = std::toupper(str[j]);
            }
            std::cout << str;
        }
        std::cout << std::endl;
    }

    return 0;
}

// int main(int argc, char *argv[]) {

//     if(argc < 2){
//         std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
//     }
//     else{
//         for(int i = 1; i < argc; i++){
//             std::string str(argv[i]);
//             std::transform(str.begin(), str.end(), str.begin(), ::toupper);
//             std::cout << str;
//         }
//         std::cout << std::endl;
//     }

//     return 0;
// }