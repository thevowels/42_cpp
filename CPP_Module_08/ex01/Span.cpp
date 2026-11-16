#include "Span.hpp"

Span::Span(){}

Span::~Span(){}

Span::Span(unsigned int N):_cached(0), _maxSize(N)
{
	_content.reserve(N);
	_sorted.reserve(N);
}

Span::Span(const Span& other)
{
	*this = other;

}

Span& Span::operator=(const Span& other)
{
	if(this != &other)
	{
		this->_maxSize = other._maxSize;
		this->_cached = other._cached;
		this->_content = other._content;
		this->_sorted = other._sorted;
	}
	return *this;
}