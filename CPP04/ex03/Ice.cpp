#include "Ice.hpp"

Ice::Ice( ) : AMateria( "ice" ) {
    std::cout << "Ice constructor call" << std::endl;
}

AMateria* Ice::clone( ) const {
    Ice *ice;

    std::cout << "Ice copy fuction call" << std::endl;
    try {
        ice = new Ice( );
    } catch (const std::bad_alloc& e) {
        ice = NULL;
        std::cerr << "Caught bad_alloc exception: " << e.what() << std::endl;
    }
    return (ice);
}

Ice::~Ice( ) {
    std::cout << "Ice destructor call" << std::endl;
}

 Ice& Ice::operator=(const Ice &raw) {
    std::cout << "Ice assignment operator call" << std::endl;
    (void)raw;
    return (*this);
 }

 void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName( ) << std::endl;
}