#include "Cure.hpp"

Cure::Cure( ) : AMateria( "cure" ) {
    std::cout << "Cure constructor call" << std::endl;
}

AMateria* Cure::clone( ) const {
    Cure *cure;

    std::cout << "Cure copy costructor call" << std::endl;
    try {
        cure = new Cure( );
    } catch (std::bad_alloc& e) {
        std::cerr << "Caught bad_alloc exception: " << e.what() << std::endl;
        cure = NULL;
    }
    return (cure);
}

Cure::~Cure( ) {
    std::cout << "Cure destructor call" << std::endl;
}

 Cure& Cure::operator=(const Cure &raw) {
    (void)raw;
    return (*this);
 }

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName( ) << "'s wounds *" << std::endl;
}