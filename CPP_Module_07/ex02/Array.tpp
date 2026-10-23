#pragma once

#include "Array.hpp"
template <typename T>
Array<T>::Array(): _elements(NULL),_size(0){};

template <typename T>
Array<T>::Array(unsigned int n):_size(n)
{
	_elements = new T[n]();
}

template <typename T>
Array<T>::Array(const Array& other):Array(other._size)
{
	unsigned int i = 0;
	while (i < other._size)
	{
		_elements[i] = other._elements[i];
		i++;
	}
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
	if(this == &other)
		return *this;

	_size = other._size;
	delete(_elements);
	_elements = new T[_size]();
	unsigned int i  = 0;
	while(i < _size)
	{
		_elements[i] = other._elements[i];
		i++;
	}
	return *this;
}

template <typename T>
Array<T>::~Array(){
	delete(_elements);
}

template <typename T>
T& Array<T>::operator[](unsigned int n)
{
	if(n >= _size)
		throw std::exception();
	return _elements[n];
}

template <typename T>
const T& Array<T>::operator[](unsigned int n) const
{
	if(n >= _size)
		throw std::exception();
	return _elements[n];
}


template <typename T>
unsigned int Array<T>::size() const {
	return _size;
}