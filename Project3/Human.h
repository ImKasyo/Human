#pragma once
class Human  // base class
{
protected:
	char* name;
	int age;
public:
	Human();
	Human(const char*, int);
	virtual void Output();
	void Input();
	virtual void Salary();
	~Human();
};