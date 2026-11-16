#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
void printStuff(int i)
{
	std::cout << i << std::endl;
}

void printVector(std::vector<int> v)
{
	std::for_each(v.begin(), v.end(), printStuff);

}
int main(void)
{
    std::vector<int> v{4, 6, 9, 13, 18, 19, 19, 15, 10};
    std::adjacent_difference(v.begin(), v.end(), v.begin());
	printVector(v);
}

// #include <array>
// #include <functional>
// #include <iterator>
// #include <numeric>
// #include <print>
// #include <vector>

// int main()
// {
//     // Default implementation - the difference between two adjacent items
//     std::vector v{4, 6, 9, 13, 18, 19, 19, 15, 10};
//     std::println("Initially, v = {}", v);
//     std::adjacent_difference(v.begin(), v.end(), v.begin());
//     std::println("Modified v = {}", v);
    
//     // Fibonacci
//     std::array<int, 10> a{1};
//     std::adjacent_difference(std::begin(a), std::prev(std::end(a)),
//                              std::next(std::begin(a)), std::plus<>{});
//     std::println("Fibonacci, a = {}", a);
// }
