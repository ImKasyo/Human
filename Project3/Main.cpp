#include <iostream>
#include "Human.h"
#include "Student.h"
#include "Programmer.h"
#include "Teacher.h"
#include "Disagner.h"
using namespace std;

int main()
{
	//Student a("Oleg",19,"Itstep",2000);
	//a.Output();
	//a.Input("Irina",20,"Politex",200);
	//a.Output();

	//Programmer b("Maks",30,"Trainee","Apple");
	//b.Output();
	//b.Input("Jack", 19, "Junior", "Samsung");
	//b.Output();

	//Teacher c("Ira", 43, "Math");
	//c.Output();
	//c.Input("Mihael", 32, "Unity");
	//c.Output();

	//Disagner d("Katya", 25, "Trainee", "Apple");
	//d.Output();



	Human* human = nullptr;
	int choiñe = 0;

	cout << "1. Choiñe Teacher" << endl;;
	cout << "2. Choiñe Designer" << endl;
	cout << "3. Choiñe Programmer" << endl;
	cout << "4. Choiñe Student" << endl;

	cin >> choiñe;

	switch (choiñe) {
	case 1:
		human = new Teacher;
		break;
	case 2:
		human = new Disagner;
		break;
	case 3:
		human = new Programmer;
		break;
	case 4:
		human = new Student;
		break;
	}
	human->Output();
	human->Salary();

}