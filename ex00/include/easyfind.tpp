#include "easyfind.hpp"

template<typename T>
void	easyfind(std::vector<T> &cont, int n)
{
	typename std::vector<T>::iterator iter = std::find(cont.begin(), cont.end(), n);
	if (iter == cont.end())
		throw ImpossibleToFind();
	else
		return(iter);
}