#include "str.h"

String::String()
{
	data = 0;
	printf("constructor String\n");
}
String::String(char* pd)
{
	data = pd;
}

String::~String()
{
     printf("virtual deconstructor String\n");
}
 

StringD::StringD()
{
    printf("constructor StringD\n");
}
StringD::~StringD()
{
    printf("virtual deconstructor StringD\n");
}

void StringD::setx(int x)
{
	this->x = x;
}

int StringD::getx()
{
	return this->x;
}

