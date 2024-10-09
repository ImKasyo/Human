#include "Programmer.h"
#include<iostream>
using namespace std;

Programmer::Programmer()
{
	cout << "Construct Programmer" << endl;
	name = nullptr;
	age = 18;
	Position = nullptr;
	Company = nullptr;
}

Programmer::Programmer(const char* N, int a, const char* P, const char* C):Human(N, a)
{
	cout << "Construct Programmer" << endl;
	Position = new char[strlen(P) + 1];
	strcpy_s(Position, strlen(P) + 1, P);

	Company = new char[strlen(C) + 1];
	strcpy_s(Position, strlen(C) + 1, C);
}

void Programmer::Output()
{
}

void Programmer::Input()
{
}

Programmer::~Programmer()
{
}
