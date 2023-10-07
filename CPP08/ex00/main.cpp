//#include <forward_list>
#include <vector>
#include <list>
#include <stack>
#include <deque>
#include "easyfind.hpp"

int main(void)
{

	std::cout << "** Int Vector **" << std::endl;

	std::vector<int> intVector;

	for (int i = 0; i <= 40; i++)
		intVector.push_back(i);

	easyfind(intVector, 25);
	easyfind(intVector, 40);
	easyfind(intVector, 50);

	std::cout << "** Int List **" << std::endl;

	std::list<int> intList;

	for (int i = 0; i <= 40; i++) {
		intList.push_back(i);
	}

	easyfind(intList, 25);
	easyfind(intList, 30);
	easyfind(intList, 40);


	std::cout << "** Int Deque **" << std::endl;

	std::deque<int> intDeque;

	for (int i = 0; i <= 40; i++) {
		intDeque.push_back(i);
	}
	easyfind(intDeque, 25);
	easyfind(intDeque, 40);
	easyfind(intDeque, 50);

	// std::cout << "** Int ForWard **" << std::endl;

	// std::forward_list<int> intForWard;

	// for (int i = 0; i <= 40; i++) {
	// 	intForWard.push_front(i);
	// }
	// easyfind(intForWard, 25);
	// easyfind(intForWard, 40);
	// easyfind(intForWard, 50);

	// std::cout << "** Int Stack **" << std::endl;

	// std::stack<int> intStack;

	// for (int i = 0; i <= 40; i++) {
	// 	intStack.push(i);
	// }
	// easyfind(intStack, 25);
	// easyfind(intStack, 40);
	// easyfind(intStack, 50);

	return 0;
}