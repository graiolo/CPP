#include "easyfind.hpp"

// template <typename T = int>
// bool easyfind(T& container, int val) {
// 	typename T::const_iterator iter;

// 	for (iter = container.begin( ); iter != container.end( ); iter++)
// 		if (*iter == val)
// 			return (std::cout << "\033[27m occurrence found \033[0m" << std::endl, true);
// 	return (std::cout << "\033[31m occurrence NOT found \033[0m" << std::endl, true);
// };

template <typename T>
bool easyfind(T& container, int val) {
    typename T::const_iterator iter;

    iter = std::find(container.begin(), container.end(), val);

    return (iter != container.end()) ?
        (std::cout << "\033[35mOccurrence found: \033[0m" << *iter << std::endl, true) :
        (std::cout << "\033[31mOccurrence NOT found\033[0m" << std::endl, false);
};