#pragma once
#include <exception>
#include <vector>
#include <algorithm>
#include <numeric>

class Span{
	public:
		Span(unsigned int N);
		Span(const Span & other);
		Span& operator=(const Span& other);
		~Span();
		void addNumber(int val);
		int shortestSpan() ;
		int longestSpan() ;
		class SingleEntryException: public std::exception{
			public:
				virtual const char * what() const throw();
		};
		class EmptyVectorException: public std::exception{
			public:
				virtual const char * what() const throw();
		};
		class StorageFullException: public std::exception{
			public:
				virtual const char * what() const throw();
		};
	private:
		Span();
		unsigned int _maxSize;
		std::vector<int> _content;
		int _min;
		int _max;
		bool	_cached;
		void compute();
};
