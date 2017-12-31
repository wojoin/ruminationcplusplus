#include <stdio.h>

class String
{
public:
	String();
	String(char* pd);
	virtual ~String();	
private:
	char* data;
};

class StringD:public String
{
public:
	StringD();
	~StringD();
	void setx(int x);
	int getx();
private:
	int x;
};
