#pragma once

#include <iostream>

class Brain {
public:
  Brain();
  Brain(const Brain &other);
  Brain &operator=(const Brain &other);
  virtual ~Brain();
  std::string getIdea(int i);
  void setIdea(int i, std::string value);

protected:
  std::string _ideas[100];
};
