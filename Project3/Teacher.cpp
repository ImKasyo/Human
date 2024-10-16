#include "Teacher.h"
#include<iostream>
using namespace std;

Teacher::Teacher()
{
	name = nullptr;
	age = 25;
	subject = nullptr;
}

Teacher::Teacher(const char* N, int a, const char* S):Human(N, a)
{
	subject = new char[strlen(S) + 1];
	strcpy_s(subject, strlen(S) + 1, S);
}

Teacher::~Teacher()
{
	delete[] subject;
}

void Teacher::Input(const char* N, int a, const char* S)
{
    if (name != nullptr) {
        delete[] name;
    }
    name = new char[strlen(N) + 1];
    strcpy_s(name, strlen(N) + 1, N);
    age = a;

    if (subject != nullptr) {
        delete[] subject;
    }
    subject = new char[strlen(S) + 1];
    strcpy_s(subject, strlen(S) + 1, S);
}

void Teacher::Output()
{
    Human::Output();
    cout << "Subject: " << subject << endl;
}

void Teacher::Salary()
{
    cout << "Salary: 1500$";
}
