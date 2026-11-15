#pragma once

#include <algorithm>
#include <exception>

class NotFoundException: public std::exception{
	public:
		virtual const char * what() const throw(){
			return "Value not found in container";
		}
};

template <typename T>
typename T::iterator easyfind(T& container, int val)
{
	typename T::iterator i = std::find(container.begin(), container.end(), val);
	if(i == container.end()){
		throw NotFoundException();
	}
	return i;
}

template <typename T>
typename T::const_iterator easyfind(const T& container, int val)
{
	typename T::const_iterator i = std::find(container.begin(), container.end(), val);
	if(i == container.end()){
		throw NotFoundException();
	}
	return i;
}