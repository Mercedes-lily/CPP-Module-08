#include "Span.hpp"

Span::Span(void)
{
	std::cout << "constructor called" << std::endl;
}

Span::Span(unsigned int N) : _N(N)
{
	std::cout << "constructor called" << std::endl;
}

Span::~Span(void)
{
	std::cout << "destructor called" << std::endl;
}

void Span::addNumber(int number)
{
	try
	{
		if(this->data.size() == this->_N)
			throw (std::out_of_range("Already full"));
		this->data.push_back(number);
	}
	catch(std::out_of_range &oor)
	{
		std::cout << oor.what() << std::endl;
	}
}

unsigned int Span::longestSpan(void)
{
	try
	{
		if(this->data.size() == 0)
			throw (std::length_error("No value in data"));
		else if(this->data.size() == 1)
			throw (std::length_error("Only 1 value in data"));
		sort(this->data.begin(), this->data.end());
		return(this->data[this->data.size() - 1] - this->data[0]);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return(0);
}

unsigned int Span::shortestSpan(void )
{
	unsigned int shortest = -1;
	unsigned int result;
	try
	{
		if(this->data.size() == 0)
			throw (std::length_error("No value in data"));
		else if(this->data.size() == 1)
			throw (std::length_error("Only 1 value in data"));
		sort(this->data.begin(), this->data.end());
		for(unsigned int i = 0; i < (this->data.size() - 1); i++)
		{
			result = this->data[i + 1] - this->data[i];
			if(result < shortest)
				shortest = result;
		}
		return(shortest);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return(0);
}


Span::Span(Span const& src)
{
	*this = src;
}

Span& Span::operator=(Span const& rhs)
{
	if (this != &rhs)
	{
		this->_N = rhs.getN();
		this->data = rhs.getData();
	}
	return *this;
}

void Span::addNumber(unsigned int head, unsigned int tail)
{
	try
	{
		if(tail < head)
			throw (std::out_of_range("end iterator must be greater or equal to head iterator"));
		else if(tail >= this->_N)
			throw (std::out_of_range("end iterator too big"));
		for(unsigned int i = head; i <= tail; i++)
			addNumber(2 * i);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

std::vector<int> Span::getData() const
{
	return(this->data);
}

unsigned int Span::getN() const
{
	return(this->_N);
}