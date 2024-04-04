#ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>
# include <iostream>
# include <string>
#include <exception>

class Span
{
private:
	unsigned int _N;
	std::vector<int> data;
	Span(void);
public:
	Span(unsigned int N);
	~Span(void);
	void addNumber(int number);
	unsigned int shortestSpan(void);
	unsigned int longestSpan(void );
	Span(Span const& src);
	Span& operator=(Span const& rhs);
	void addNumber(unsigned int head, unsigned int tail);
	std::vector<int> getData() const;
	unsigned int getN() const;
};

#endif