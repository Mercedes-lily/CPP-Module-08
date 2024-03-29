#ifndef SPAN_HPP
# define SPAN_HPP
# include <array>

class Span
{
private:
	unsigned int _N;
	std::array<int, size_t> arr;
	Span(void);

public:
	Span(unsigned int N);
	~Span(void);
	//Span(Span const& src);
	//Span& operator=(Span const& rhs);
	//addNumber(); //addback
	//shortestSpan(); //max_element() min_element()
	//longestSpan();
	//fctAjoutPlageIterateur();  //fill function ?
};

Span::Span(void)
{

}

Span ::Span(unsigned int N)
{

}
/*
Span::Span(Span const& src)
{
	*this = src;
}

Span& Span::operator=(Span const& rhs)
{
	if (this != &rhs)
	{
	}
	return *this;
}
*/
Span::~Span(void)
{

}

#endif