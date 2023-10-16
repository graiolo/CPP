//Your program must be able to use a positive integer sequence as argument.

//Your program must use the merge-insert sort algorithm to sort the positive integer
//sequence.

// You must use at least two different containers in your code to
// validate this exercise. Your program must be able to handle at
// least 3000 different integers.

// • On the first line you must display an explicit text followed by the unsorted positive
// integer sequence.
// • On the second line you must display an explicit text followed by the sorted positive
// integer sequence.
// • On the third line you must display an explicit text indicating the time used by
// your algorithm by specifying the first container used to sort the positive integer
// sequence.
// • On the last line you must display an explicit text indicating the time used by
// your algorithm by specifying the second container used to sort the positive integer
// sequence.

#include "PmergeMe.hpp"

int main(int argc, char* argv[]) {
    try {
        if (argc < 2)
            throw std::invalid_argument("Error.");
        PmergeMe::ParsArgs(argv);
        PmergeMe::Time( );
    } catch (std::exception& e) {
        std::cout << e.what( ) << std::endl;
        return (EXIT_FAILURE);
    }
    return (EXIT_SUCCESS);
}