#pragma once
#include "Human.h"
class Disagner :public Human
{
	char* Position;
	char* Company;
public:
	Disagner();
	Disagner(char* p, char* c);
	void Output();
	void Salary();
	~Disagner();
};

