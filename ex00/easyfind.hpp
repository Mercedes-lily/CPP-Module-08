#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <string>
# include <iostream>
# include <algorithm>
# include <iterator>


template< typename T>
int easyfind(T const & toFind, int nb)
{
	typename T::const_iterator const it = std::find(toFind.begin(), toFind.end(), nb );
	if(it == toFind.end())
		return(1);
	return(0);
}

#endif