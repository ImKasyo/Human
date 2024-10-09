#pragma once
#include "Human.h"
class Teacher : public Human
{
	char* subject;
public:
	Teacher();
	Teacher(const char* N, int a, const char* S);
	~Teacher();
	void Input();
	void Output();
};

