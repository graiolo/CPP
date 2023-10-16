#include "PmergeMe.hpp"

const std::string set("1234567890 ");
std::vector<int>	PmergeMe::_vector;
std::deque<int>		PmergeMe::_deque;

template<typename T>
void PmergeMe::PrintContainer(const T& container, const std::string& event) {
	std::cout << event << "	";
	std::copy(container.begin(), container.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;
}

void PmergeMe::ParsArgs(char** c_arg) {
	for (int i = 1; c_arg[i] != 0; ++i) {
		std::string str_arg(c_arg[i]);
		for (size_t i = 0; i < str_arg.size( ); i++) {
			if (set.find(str_arg.at(i))== std::string::npos)
				throw std::invalid_argument("Error.");
		}
		PmergeMe::FillContainer(std::atoi(c_arg[i]));
	}
}

void PmergeMe::FillContainer(int value) {
	if (value > __INT_MAX__)
			throw std::invalid_argument("Error: too large number.");
	_vector.push_back(value);
	_deque.push_back(value);
}

template<typename T>
void PmergeMe::InsertionSort(T begin, T end) {
	int value;
	for (T it = begin + 1; it < end; ++it){
		value = *it;
		T j = it - 1;
		while (j >= begin && *j > value){
			*(j + 1) = *j;
			--j;
		}
		*(j + 1) = value;
	}
}

template<typename T, typename IT>
void	PmergeMe::MergeInsertion(T& container, IT begin, IT end) {
	if (std::distance(begin, end) > 5) {
		IT mid = begin + std::distance(begin, end) / 2;
		PmergeMe::MergeInsertion(container, begin, mid);
		PmergeMe::MergeInsertion(container, mid, end);
		T copy(std::distance(begin, end));
		std::merge(begin, mid, mid, end, copy.begin());
		std::copy(copy.begin(), copy.end(), begin);
	}
	else
		PmergeMe::InsertionSort(begin, end);
}

void PmergeMe::Time(void) {
    clock_t start, end;
	
   	PmergeMe::PrintContainer(_vector, "Before:");

    start = clock();
    PmergeMe::MergeInsertion(_vector, _vector.begin(), _vector.end());
    end = clock();

	PmergeMe::PrintContainer(_vector, "After:");

    double elapsed_time = static_cast<double>(end - start) / CLOCKS_PER_SEC;
    std::cout << "Time to process a range of " << _vector.size() << " elements with std::vector : "
              << std::fixed << elapsed_time << "us" << std::endl;

    start = clock();
    PmergeMe::MergeInsertion(_deque, _deque.begin(), _deque.end());
    end = clock();

    elapsed_time = static_cast<double>(end - start) / CLOCKS_PER_SEC;
    std::cout << "Time to process a range of " << _deque.size() << " elements with std::deque : "
              << std::fixed << elapsed_time << "us" << std::endl;
}