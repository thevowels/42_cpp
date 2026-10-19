#pragma once

// Default constructor 1
// Copy Constructor 
// Copy Assignment Operator 1
// Destructor 1


class Base{
	private:
	public:
		virtual ~Base();
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);
