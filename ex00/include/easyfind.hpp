#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <exception>
# include <stdexcept>
# include <vector>

class ImpossibleToFind : public std::exception
{
	public:
		const char *what() const throw()
		{
			return "not in the vector";
		}
};

template<typename T>
T	easyfind(std::vector<T> &cont, int n);

# include "easyfind.tpp"

#endif