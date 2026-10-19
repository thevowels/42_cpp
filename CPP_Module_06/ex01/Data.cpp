#include "Data.hpp"

Data::Data() : _name("name"),_value(42)
{
}
Data::Data(std::string name, int value): _name(name),_value(value)
{
}
Data::Data(Data& data)
{
	Data(data._name, data._value);
}

Data::~Data()
{

}

Data& Data::operator=(Data& other)
{
	if(this != &other)
	{
		this->_name = other._name;
		this->_value = other._value;
	}
	return *this;
}

