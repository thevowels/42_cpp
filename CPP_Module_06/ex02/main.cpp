#include "Base.hpp"

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


int main(void)
{

	for(int i = 0; i < 10; i++)
	{
		Base *b = generate();
		identify(b);
		identify(*b);
		delete(b);
	}	
	
}