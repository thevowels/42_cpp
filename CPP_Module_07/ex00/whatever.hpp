#pragma once

template <class T>
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <class T>
T min(T a, T b)
{
	return a > b ? b : a;
}

template <class T>
T max(T a, T b)
{
	return a > b ? a : b;
}