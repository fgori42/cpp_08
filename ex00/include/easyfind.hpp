#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <exception>
# include <stdexcept>

class ImpossibleToFind : public exception
{
	public:
		const char *what() const throw()
		{
			return "not in the vector";
		}
};

template<typename T>
void	easyfind(std::vector<T> &cont, int n);

# include "easyfind.tpp"

#endif