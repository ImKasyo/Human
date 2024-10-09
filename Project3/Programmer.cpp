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
