#include "MutantStack.hpp"

int main()
{
	
	{   // main pdf
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "second : " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "size : "<< mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << "element : "<< *it << std::endl;
		++it;
		}
		std::stack<int> s(mstack);
	}
	{   // main pdf devrait agir comme ceci a regarder si marche avec list
		std::list<int>::iterator i;
		std::list<int> lst(0);
		i = lst.begin();
		lst.push_front(5);
		lst.push_back(17);
		i++;
		i++;
		std::cout << "second : "<< *i << std::endl;
		lst.pop_back();
		std::cout << "size : "<< lst.size() << std::endl;
		lst.push_back(3);
		lst.push_back(5);
		lst.push_back(737);
		lst.push_back(0);
		std::list<int>::iterator it = lst.begin();
		std::list<int>::iterator ite = lst.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << "element : "<< *it << std::endl;
		++it;
		}
		std::list<int> s(lst);
	}
	{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	MutantStack<int>::const_iterator it = mstack.cbegin();
	MutantStack<int>::const_iterator ite = mstack.cend();
	++it;
	--it;
	while (ite != it)
	{
	std::cout << "const iterator element : "<< *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
	}
	{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	MutantStack<int>::reverse_iterator it = mstack.rbegin();
	MutantStack<int>::reverse_iterator ite = mstack.rend();
	while (ite != it)
	{
	std::cout << "reverse iterator element : "<< *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
	}
	{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	MutantStack<int>::const_reverse_iterator it = mstack.crbegin();
	MutantStack<int>::const_reverse_iterator ite = mstack.crend();
	while (it != ite)
	{
	std::cout << "const reverse iterator element : "<< *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
	}
}

