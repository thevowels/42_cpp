/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 07:35:58 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/05/13 07:37:25 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::ifstream infile(filename);
    if (!infile)
    {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return 1;
    }

    std::string content((std::istreambuf_iterator<char>(infile)), std::istreambuf_iterator<char>());
    infile.close();

    size_t pos = 0;
    while ((pos = content.find(s1, pos)) != std::string::npos)
    {
        content.replace(pos, s1.length(), s2);
        pos += s2.length();
    }

    std::ofstream outfile(filename + ".replace");
    if (!outfile)
    {
        std::cerr << "Error: Could not create file " << filename + ".replace" << std::endl;
        return 1;
    }

    outfile << content;
    outfile.close();

    return 0;
}