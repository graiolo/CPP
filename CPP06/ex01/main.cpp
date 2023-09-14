#include "Serializer.hpp"
#include "Data.hpp"

int	main(void)
{
	Data*		data;
	uintptr_t	uinptr;

	data = new Data;
	uinptr = Serializer::serialize(data);
	std::cout << "data pointer is: " << data << std::endl;
	std::cout << "uinptr number is: " << uinptr << std::endl;
	std::cout << "uinptr back to data is: " << Serializer::deserialize(uinptr) << std::endl;
	delete data;
	return (0);
}