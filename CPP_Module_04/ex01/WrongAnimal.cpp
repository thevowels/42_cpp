#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():_type("WrongAnimal")
{
  std::cout << "Wrong Animal Default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
  std::cout << "Wrong Animal Copy Constructor Called."<< std::endl;
  *this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
  std::cout << "Wrong Animal Copy Assignment Operator"; 
  if(this == &other)
    return *this;

  this->_type = other._type;
  return *this;
}

WrongAnimal::~WrongAnimal()
{
  std::cout << "Wrong Animal Destructor caled." << std::endl;
}

void WrongAnimal::makeSound(void) const
{
  std::cout << "WrongAnimal says: its wrong" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
  return this->_type;
}
