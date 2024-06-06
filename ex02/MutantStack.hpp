#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <list>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
private:
public:
	typedef typename std::deque<T>::iterator iterator;
	typedef typename std::deque<T>::reverse_iterator reverse_iterator;
	typedef typename std::deque<T>::const_iterator const_iterator;
	typedef typename std::deque<T>::const_reverse_iterator const_reverse_iterator;
	iterator begin() { return(this->c.begin()); }
	iterator end() { return(this->c.end()); }
	reverse_iterator rbegin() { return(this->c.rbegin()); }
	reverse_iterator rend() { return(this->c.rend()); }
	const_iterator cbegin() { return(this->c.cbegin()); }
	const_iterator cend() { return(this->c.cend()); }
	const_reverse_iterator crbegin() { return(this->c.crbegin()); }
	const_reverse_iterator crend() { return(this->c.crend()); }
	MutantStack(void) : std::stack<T>()
	{}
	MutantStack(MutantStack const& src) : std::stack<T>(src)
	{}
	virtual ~MutantStack(void) {}
	MutantStack& operator=(MutantStack const& rhs)
	{
		if (this != &rhs)
		{
			this->iterator = rhs->iterator();
			this->reverse_iterator= rhs->reverse_iterator();
			this->const_iterator= rhs->const_iterator();
			this->const_reverse_iterator= rhs->const_reverse_iterator();
		}
		return (*this);
	}
};

#endif
