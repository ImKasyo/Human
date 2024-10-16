#pragma once
#include "Human.h"
class Disagner :public Human
{
	char* Position;
	char* Company;
public:
	Disagner();
	Disagner(const char* N, int a, const char* p, const  char* c);
	void Output();
	void Salary();
	~Disagner();
};

