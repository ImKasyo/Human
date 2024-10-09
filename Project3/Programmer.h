#pragma once
#include "Human.h"
class Programmer : public Human
{
	char* Position;
	char* Company;
public: 
	Programmer();
	Programmer(const char* n, int a, const char* P, const char* C);
	void Output();
	void Input();
	~Programmer();
};

