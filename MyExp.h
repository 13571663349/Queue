#ifndef MYEXP_H_
#define MYEXP_H_
#include <iostream>

class MyExp : public std::exception
{
public:
	MyExp(const char * c) {exception::exception(c);}
	MyExp(){exception::exception();}
};

#endif