#pragma once

#include <exception>


template <class T>
class Array
{
	private:
		T*		_elements;
		size_t	_size;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array& other);
		Array& operator=(const Array& other);
		~Array();
		T& operator [](unsigned int n);
		const T& operator [](unsigned int n) const;
		unsigned int size() const;
};

#include "Array.tpp"