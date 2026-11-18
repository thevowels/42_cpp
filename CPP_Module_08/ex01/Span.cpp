#include "Span.hpp"

Span::Span(){}

Span::~Span(){}

Span::Span(unsigned int N):_maxSize(N), _cached(false)
{
	_content.reserve(N);
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
		this->_max = other._max;
		this->_min = other._min;
	}
	return *this;
}

void Span::addNumber(int val)
{
	if(_content.size() == _maxSize)
		throw Span::StorageFullException();
	_content.push_back(val);
	_cached = false;
	
}

int Span::shortestSpan()
{
	if(_content.empty())
		throw Span::EmptyVectorException();
	else if (_content.size() == 1)
		throw Span::SingleEntryException();
	else
	{
		if(!_cached)
			compute();
		return _min;
	}
}

int Span::longestSpan() 
{
	if(_content.empty())
		throw Span::EmptyVectorException();
	else if (_content.size() == 1)
		throw Span::SingleEntryException();
	else
	{
		if(!_cached)
			compute();
		return _max;
	}
}

void Span::compute()
{
	std::vector<int> _sorted = _content;
	std::sort(_sorted.begin(),_sorted.end());
	_max = *(_sorted.end() -1) - *_sorted.begin();
	std::adjacent_difference(_sorted.begin(), _sorted.end(), _sorted.begin());
	_min = *std::min_element(_sorted.begin()+1, _sorted.end());
	_cached = true;
}


const char *Span::SingleEntryException::what() const throw()
{
	return "There is only single entry inside the span!";
}


const char *Span::StorageFullException::what(void) const throw()
{
	return "Max Size has reached. You can't add anymore!";
}

const char *Span::EmptyVectorException::what(void) const throw()
{
	return "There is no Entry inside the span!";
}