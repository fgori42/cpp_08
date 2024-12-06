#include "easyfind.hpp"

int main()
{
	std::vector<int> vec;
	for (int i = 0; i < 7; i++)
		vec.push_back(i);

	try
	{	
		if (easyfind(vec, 3) == 3)
		{
			std::cout << easyfind(vec, 3) << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{	
		if (easyfind(vec, 8) == 3)
		{
			std::cout << easyfind(vec, 3) << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}