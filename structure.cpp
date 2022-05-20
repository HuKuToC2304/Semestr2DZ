#include <iostream>
#include <string>
using namespace std;

struct company 
{
	string surname;
	string name;
	int year_birth;
	string position;
	float salary;
};
int main()
{	
	int worker;
	company workers[10] = {
		{"Minenok", "Nikita", 2004, "Director", 500000},
		{"Goldobin", "Nikolay", 2000, "Programmer", 150000},
		{"Korobkin", "Egor", 1982, "Administrator", 70500},
		{"Trofimov", "Oleg", 1990, "Accountant", 50000},
		{"Chernyshenko", "Igor", 1976, "Ingineer", 45000},
		{"Doroshenko", "Alexey", 1996, "Economist", 78000},
		{"Petrushin", "Dmitry", 1990, "Technician", 54000},
		{"Biryukov", "Ilya", 2002, "Translator", 80000},
		{"Parin", "Makar", 1980, "Cleaner", 30000},
		{"Orlovsky", "Vitaly", 1976, "Security_guard", 28000},
	};
	int A;
	double B;
	for(int i=0; i<10; i++){
		A+=workers[i].salary;
	}
	B=A/10;
	cout<<"Average salary is "<<B<<" rubles."<<endl;
	for(int i=0; i<10; i++){
		if (2022-workers[i].year_birth > 30){
			cout<<workers[i].name<<" "<<workers[i].surname<<endl;
		}
	}
	return 0;
}
