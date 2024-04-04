#include "Span.hpp"

int main()
{
	std::vector<int> data;
	Span span1(12);
	span1.addNumber(7);
	span1.addNumber(24);
	span1.addNumber(53);
	span1.addNumber(22);
	span1.addNumber(36);
	span1.addNumber(65);
	span1.addNumber(98);
	span1.addNumber(134);
	span1.addNumber(9);
	span1.addNumber(74);
	span1.addNumber(12);
	span1.addNumber(89);
	span1.addNumber(113);  // should write already full
	std::cout << "span1" << std::endl;
	std::cout << "Shortest Span : " << span1.shortestSpan() << std::endl;
	std::cout << "Longest Span  : " << span1.longestSpan() << std::endl;
	
	Span span2(12);
	span2.addNumber(7);
	std::cout << "span2" << std::endl;
	std::cout << "Shortest Span : " << span2.shortestSpan() << std::endl;
	std::cout << "Longest Span  : " << span2.longestSpan() << std::endl;
	
	Span span3(12);
	std::cout << "span3" << std::endl;
	std::cout << "Shortest Span : " << span3.shortestSpan() << std::endl;
	std::cout << "Longest Span  : " << span3.longestSpan() << std::endl;
	
	Span span4(12);
	span4.addNumber(4 , 12);
	span4.addNumber(11 , 1);
	span4.addNumber(0, 7);
	std::cout << "span4" << std::endl;
	std::cout << "Shortest Span : " << span4.shortestSpan() << std::endl;
	std::cout << "Longest Span  : " << span4.longestSpan() << std::endl;

	

}