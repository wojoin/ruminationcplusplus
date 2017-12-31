#include <stdio.h>

class Base
{
public:
	virtual ~Base() {}
	void f(){printf("base f\n");}
	virtual void g(){printf("base g\n");}
};

class Derived : public Base
{
public:
	void f(){printf("derived f\n");}
	virtual void g(){printf("derived g\n");}
};
