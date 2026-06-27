#include "Brain.hpp"

Brain::Brain() {
  std::cout << "Brain Default Constructor Called." << std::endl;
}

Brain::Brain(const Brain &other) {
  std::cout << "Brain Copy Constructor Called. " << std::endl;
  *this = other;
}

Brain &Brain::operator=(const Brain &other) {
  std::cout << "Brain Assignment Operator." << std::endl;

  if (this == &other)
    return *this;

  for (int i = 0; i < 100; i++) {
    _ideas[i] = other._ideas[i];
  }
  return *this;
}

Brain::~Brain() { std::cout << "Brain Destructor Caled." << std::endl; }


std::string Brain::getIdea(int i)
{
	return _ideas[i];
}
void Brain::setIdea(int i, std::string value)
{
	_ideas[i] = value;
}