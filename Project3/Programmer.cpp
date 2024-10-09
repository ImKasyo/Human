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
	strcpy_s(Company, strlen(C) + 1, C);
}

void Programmer::Output()
{
	cout << "Output Student:";
	Human::Output();
	cout << "Position:" << Position << endl;
	cout << "Company:" << Company << endl;
}

void Programmer::Input(const char* N, int a, const char* P, const char* C)
{
	if (name != nullptr)
	{
		delete[] name;
	}
	name = new char[strlen(N) + 1];
	strcpy_s(name, strlen(N) + 1, N);
	age = a;

	Position = new char[strlen(P) + 1];
	strcpy_s(Position, strlen(P) + 1, P);

	if (Company != nullptr) {
		delete[] Company;
	}
	Company = new char[strlen(C) + 1];
	strcpy_s(Company, strlen(C) + 1, C);

}

Programmer::~Programmer()
{
	delete[] Company;
	delete[] Position;
}
