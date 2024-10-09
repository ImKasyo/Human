#include <iostream>
#include "Human.h"
#include "Student.h"
#include "Programmer.h"
using namespace std;

int main()
{
	Student a("Oleg",19,"Itstep",2000);
	a.Output();
	a.Input("Irina",20,"Politex",200);
	a.Output();

	Programmer b("Maks",30,"Trainee","Apple");
	b.Output();
	b.Input("Jack", 19, "Junior", "Samsung");

}