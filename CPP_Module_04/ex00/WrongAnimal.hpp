#pragma once

#include <iostream>

class WrongAnimal{

  public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& other);
    WrongAnimal& operator=(const WrongAnimal& other);
    ~WrongAnimal();
    void makeSound(void) const;
    std::string getType(void) const;

  protected:
    std::string _type;
};
