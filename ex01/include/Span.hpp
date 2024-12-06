#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>
# include <string>
# include <exception>
# include <stdexcept>

class Span
{
private:
	std::vector<int>	_vec;
	unsigned int		_size;
public:
	Span();
	Span(unsigned int n);
	Span(const Span &org);
	~Span();
	Span &operator=(const Span &org);

	class VectorFull: public std::exception
	{
		const char *what() const throw();
	};

	class ImpossibleToFind: public std::exception
	{
		const char *what() const throw();
	};
	void addNumber(int n);
	void addNumber(std::vector<int>::iterator beg, std::vector<int>::iterator end);
	int shortestSpan();
	int longestSpan();
};

Span::Span(): _size(0)
{
}

Span::Span(unsigned int n): _size(n)
{
}

Span::Span(const Span &org): _size(org._size), _vec(org._vec)
{
}

Span &Span::operator=(const Span &org)
{
	if (this != &org)
	{
		this->_size = org._size;
		this->_vec = org._vec;
	}
	return (*this);
}

Span::~Span()
{
}

const char *Span::ImpossibleToFind::what() const throw()
{
	return ("Impossible find a span, empty vector or too short");
}

const char *Span::VectorFull::what() const throw()
{
	return ("Vector on his limit");
}

void Span::addNumber(int n)
{
	if (_vec.size() <= n)
		_vec.push_back(n);
	else
		throw VectorFull();
}

#endif