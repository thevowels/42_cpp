#include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal()
{
  this->_type = "WrongCat";
  std::cout << "WrongCat default Constructor Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other):WrongAnimal()
{
  std::cout << "WrongCat copy constructor called!" << std::endl;
  *this = other;
}

WrongCat::~WrongCat()
{
  std::cout << "WrongCat Deconstructor called!" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
  if(this == &other)
    return *this;
  this->_type = other._type;
  return *this;
}

void WrongCat::makeSound(void) const{
  std::cout << "WrongCat says: Not Meow"<< std::endl;
}
