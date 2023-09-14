#include "Array.hpp"

template <typename T>
Array<T>::Array(void) {
	_array = new T[0];
	_size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n) {
	_array = new T[n];
	_size = n;
}

template <typename T>
Array<T>::Array(Array const&raw) {
	_size = raw._size;
	_array = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
		_array[i] = raw._array[i];
}

template <typename T>
Array<T>& Array<T>::operator=(Array<T> const &raw) {
	if (this != &raw) {
		_size = raw._size;
		if (_size)
			delete[ ] _array;
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = raw._array[i];
	}
	return (*this);
}

template <typename T>
Array<T>::~Array(void) {
	if (_size)
		delete[ ] _array;
}

template <typename T>
T& Array<T>::operator[](int index)
{
	if (index > static_cast<int>(_size) - 1 || index < 0) 
		throw (Array<T>::OutOfRange( ));
	return (_array[index]);
}

template <typename T>
unsigned int Array<T>::size(void) const {
	return (_size);
}

