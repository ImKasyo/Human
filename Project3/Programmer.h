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
	void Input(const char* N, int a, const char* C, const char* P);
	~Programmer();
	void Salary();
};

