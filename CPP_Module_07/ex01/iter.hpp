#pragma once

#include <iostream>


template <typename T, typename F>
void iter(T *arr, const size_t len, F f)
{
	size_t i = 0;
	while(i < len)
	{
		f(arr[i]);
		i++;
	}
}

