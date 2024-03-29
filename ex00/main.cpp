#include "easyfind.hpp"
#include <array>
#include <vector>
#include <deque>
#include <forward_list>
#include <list>

int main()
{
	std::array<int, 5> arr = {7 , 6, 1, 9, 11};
	std::vector<int> vec;
	for (int i = 1; i <= 5; i++)
            vec.push_back(i);
	std::deque<int> dq;
	for (int i = 1; i <= 5; i++)
        dq.push_back(i);
	std::forward_list<int> flst;
	for (int i = 1; i <= 5; i++)
        flst.push_front(i);
	std::list<int> lst;
	for (int i = 1; i <= 5; i++)
        lst.push_back(i);

	if (easyfind(arr, 6) == 1)
		std::cout << "Argument not found :(" << std::endl;
	else
		std::cout << "Found :)" << std::endl;
	if (easyfind(vec, 4) == 1)
		std::cout << "Argument not found :(" << std::endl;
	else
		std::cout << "Found :)" << std::endl;
	if (easyfind(dq, 4) == 1)
		std::cout << "Argument not found :(" << std::endl;
	else
		std::cout << "Found :)" << std::endl;
	if (easyfind(flst, 4) == 1)
		std::cout << "Argument not found :(" << std::endl;
	else
		std::cout << "Found :)" << std::endl;
	if (easyfind(lst, 4) == 1)
		std::cout << "Argument not found :(" << std::endl;
	else
		std::cout << "Found :)" << std::endl;


		if (easyfind(arr, 16) == 1)
		std::cout << "Argument not found :(" << std::endl;
	else
		std::cout << "Found :)" << std::endl;
	if (easyfind(vec, 14) == 1)
		std::cout << "Argument not found :(" << std::endl;
	else
		std::cout << "Found :)" << std::endl;
	if (easyfind(dq, 14) == 1)
		std::cout << "Argument not found :(" << std::endl;
	else
		std::cout << "Found :)" << std::endl;
	if (easyfind(flst, 14) == 1)
		std::cout << "Argument not found :(" << std::endl;
	else
		std::cout << "Found :)" << std::endl;
	if (easyfind(lst, 14) == 1)
		std::cout << "Argument not found :(" << std::endl;
	else
		std::cout << "Found :)" << std::endl;
	
	
	
	
}