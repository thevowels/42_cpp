#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include "Span.hpp"

void printStuff(int i)
{
	std::cout << i << std::endl;
}
void addNumber(Span &s, int i)
{
	s.addNumber(i);
}

void printVector(std::vector<int> v)
{
	std::for_each(v.begin(), v.end(), printStuff);

}

void normalTest(void)
{
		int arr[8] = {42, 31, 7, 80, 2, 26, 75,19 };
    std::vector<int> vec(arr, arr + 8);

    Span sp(8);
	try{
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	}catch(const Span::EmptyVectorException& e)
	{
		std::cout << "Error Occured ! " << e.what() << std::endl;
		
	}
	
	sp.addNumber(vec[0]);
	try{
		std::cout << "Longest span:  " << sp.longestSpan() << std::endl;
	}catch(const Span::SingleEntryException& e)
	{
		std::cout << "Error Occured ! " << e.what() << std::endl;
		
	}

	for(std::vector<int>::iterator it = vec.begin()+1; it != vec.end()-1; it++)
		sp.addNumber(*it);

    std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest span:  " << sp.longestSpan() << std::endl;
	
	sp.addNumber(*(vec.end()-1));
	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest span:  " << sp.longestSpan() << std::endl;
	try{
		sp.addNumber(-32);
	}catch(const Span::StorageFullException& e)
	{
		std::cout << "Error Occured ! " << e.what() << std::endl;		
	}
}

void stressTest(void)
{
	Span sp = Span(10000);
	std::srand(42);
	// 1000
	for(int i = 0; i < 1000; i++)
		sp.addNumber(std::rand()%10000);
	std::clock_t start = std::clock();

    long shortest = sp.shortestSpan();
    long longest  = sp.longestSpan();

    std::clock_t end = std::clock();

    double elapsedSeconds = static_cast<double>(end - start) / CLOCKS_PER_SEC;
    double elapsedMs      = elapsedSeconds * 1000.0;

	std::cout << "====== 1000 Numbers ====="<< std::endl;
    std::cout << "Shortest: " << shortest << " | Longest: " << longest << std::endl;
    std::cout << "Duration: " << elapsedMs << " ms (" << elapsedSeconds << " s)" << std::endl;

	// 5000
	for(int i = 0; i < 4000; i++)
		sp.addNumber(std::rand()%100000);
	start = std::clock();
	shortest = sp.shortestSpan();
	longest  = sp.longestSpan();

    end = std::clock();

	elapsedSeconds = static_cast<double>(end - start) / CLOCKS_PER_SEC;
	elapsedMs      = elapsedSeconds * 1000.0;

	std::cout << "====== 5000 Numbers ====="<< std::endl;
    std::cout << "Shortest: " << shortest << " | Longest: " << longest << std::endl;
    std::cout << "Duration: " << elapsedMs << " ms (" << elapsedSeconds << " s)" << std::endl;
	// 5000
	for(int i = 0; i < 5000; i++)
		sp.addNumber(std::rand());
	start = std::clock();
	shortest = sp.shortestSpan();
	longest  = sp.longestSpan();

    end = std::clock();

	elapsedSeconds = static_cast<double>(end - start) / CLOCKS_PER_SEC;
	elapsedMs      = elapsedSeconds * 1000.0;

	std::cout << "====== 10000 Numbers ====="<< std::endl;
    std::cout << "Shortest: " << shortest << " | Longest: " << longest << std::endl;
    std::cout << "Duration: " << elapsedMs << " ms (" << elapsedSeconds << " s)" << std::endl;

	// Instance
	start = std::clock();
	shortest = sp.shortestSpan();
	longest  = sp.longestSpan();

    end = std::clock();

	elapsedSeconds = static_cast<double>(end - start) / CLOCKS_PER_SEC;
	elapsedMs      = elapsedSeconds * 1000.0;

	std::cout << "====== Instant as I cached ====="<< std::endl;
    std::cout << "Shortest: " << shortest << " | Longest: " << longest << std::endl;
    std::cout << "Duration: " << elapsedMs << " ms (" << elapsedSeconds << " s)" << std::endl;


}

int main(void)
{
	// normalTest();
	stressTest();
    return 0;	
}


