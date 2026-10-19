#pragma once

#include <string>


class Data{
	private:
	public:
		std::string _name;
		int _value;
		Data();
		Data(std::string name, int value);
		Data(Data& other);
		~Data();
		Data& operator=(Data & other);

};