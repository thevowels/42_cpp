#pragma once
#include <exception>
#include <vector>

class Span{
	public:
		Span(unsigned int N);
		Span(const Span & other);
		Span& operator=(const Span& other);
		~Span();
		void addNumber(int val);
		int shortestSpan() const;
		int longestSpan() const;
		class SingleEntryException: public std::exception{
			public:
				virtual const char * what() const throw();
		};
	private:
		Span();
		unsigned int _maxSize;
		std::vector<int> _content;
		std::vector<int> _sorted;
		bool	_cached;
};
