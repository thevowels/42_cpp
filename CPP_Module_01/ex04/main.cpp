/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 07:35:58 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/05/13 08:19:39 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

std::string ft_replace(std::string str, const std::string &s1,
	const std::string &s2)
{
	size_t	pos;

	pos = 0;
	while ((pos = str.find(s1, pos)) != std::string::npos)
	{
		str.replace(pos, s1.length(), s2);
		pos += s2.length();
	}
	return (str);
}

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return (1);
	}

	std::string fileName = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string buffer = "";

	std::ifstream inputFile;
	std::ofstream outputFile;

	inputFile.open(fileName.c_str());
	if (!inputFile.is_open())
	{
		std::cerr << "Error: Could not open file " << fileName << std::endl;
		return (1);
	}

	outputFile.open((fileName + ".replace").c_str());
	if (!outputFile.is_open())
	{
		std::cerr << "Error: Could not create file " << fileName
			+ ".replace" << std::endl;
		inputFile.close();
		return (1);
	}

    std::string line;
	while (std::getline(inputFile, line))
	{
		buffer += line;
		if (!inputFile.eof())
		{
			buffer += "\n";
		}
	}
	outputFile << ft_replace(buffer, s1, s2);

	outputFile.close();
	inputFile.close();

	return (0);
}