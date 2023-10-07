#include "Span.hpp"

Span::Span(unsigned int N) : _n(N), _size(N) {
	_elem = new std::vector<int>[N]( );
}

Span::~Span( ) {
	delete[] _elem;
}

Span& Span::operator=(const Span& raw) {
	if (this != &raw) {
		delete[] _elem;
		_n = raw._n;
		_size = raw._size;
		_elem = new std::vector<int>[_n]( );
		std::copy(raw._elem->begin( ), raw._elem->end( ), _elem->begin( ));
	}
	return (*this);
}

Span::Span(const Span& raw) : _n(raw._n), _size(raw._size) {
	_elem = new std::vector<int>[_n]( );
	std::copy(raw._elem->begin( ), raw._elem->end( ), _elem->begin( ));
}

void Span::addNumber(int add) {
	if (!_n)
		throw(Span::SpaceExpired( ));
	std::vector<int>::const_iterator iter = std::find(_elem->begin( ), _elem->end( ), add);
	if (iter != _elem->end( ))
		throw(Span::DuplicateValue( ));
	_elem->push_back(add);
	_n--;
}

void Span::getSpan(void) const {
	std::cout << "List of elem: { ";
	std::copy(this->_elem->begin(), this->_elem->end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << "}" << std::endl;
}

int Span::shortestSpan(void){
	if(_elem->size( ) <= 1)
		throw(Span::FewElements( ));
	std::vector<int> diffVector(_elem->size( ), 0);
	std::adjacent_difference(_elem->begin(), _elem->end(), diffVector.begin());
	std::sort(diffVector.begin( ), diffVector.end( ));
	return (diffVector.front( ));
}

int Span::longestSpan(void){
	if(_elem->size( ) <= 1)
		throw(Span::FewElements( ));
	std::sort(_elem->begin( ), _elem->end( ));
	return(_elem->back( ) - _elem->front( ));
}

void Span::fillSpan( ) {
	while (_n) {
		try {
			this->addNumber(rand( ) % (10 * _size));
		} catch (...) {
			;
		}
	}
}

const char* Span::DuplicateValue::what( ) const throw ( ) {
	return ("Duplicate value find");
}
const char* Span::SpaceExpired::what( ) const throw ( ) {
	return ("Space in span is expired");
}
const char* Span::FewElements::what( ) const throw ( ) {
	return ("Too few elements");
}