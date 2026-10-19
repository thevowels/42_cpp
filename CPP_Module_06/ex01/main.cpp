#include "Data.hpp"
#include "Serializer.hpp"
#include <limits>
int main(void)
{
	Data d;

	std::cout << d._name << std::endl;
	std::cout << d._value << std::endl;

	uintptr_t t = Serializer::serialize(&d);
	

	Data *e = Serializer::deserialize(t);

	std::cout << "Pointer value " << &d << std::endl;

	std::cout << "Serialzied Raw Value: " << std::hex << t << std::dec<< std::endl;
	std::cout << "Deserialized Raw value: "<< e << std::endl;
	std::cout << 234 << std::endl;


}