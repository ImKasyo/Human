#include "Disagner.h"
#include<iostream>
using namespace std;

Disagner::Disagner()
{
	Position = nullptr;
	Company = nullptr;
}

Disagner::Disagner(const char* N, int a, const  char* p, const  char* c): Human(N, a)
{
	Position = new char[strlen(p) + 1];
	strcpy_s(Position, strlen(p) + 1, p);

	Company = new char[strlen(c) + 1];
	strcpy_s(Company, strlen(c) + 1, c);
}

void Disagner::Output()
{
	Human::Output();
	cout << "Position: " << Position << ", Company: " << Company;
}

void Disagner::Salary()
{
}

Disagner::~Disagner()
{
	delete[] Position;
	delete[] Company;
}


