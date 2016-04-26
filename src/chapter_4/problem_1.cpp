#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
	struct details
	{
		string first_name;
		string last_name;
		char grade;
		int age;
	};
	struct details d;

	cout<<"What is your first name? ";
	getline(cin, d.first_name);

	cout<<"What is your last name? ";
	getline(cin, d.last_name);

	cout<<"What letter grade do you deserve? ";
	cin>>d.grade;

	cout<<"What is your age? ";
	cin>>d.age;

	cout<<"Name: "<<d.last_name<<", "<<d.first_name<<endl;
	cout<<"Grade: "<<char(d.grade + 1)<<endl;
	cout<<"Age: "<<d.age<<endl;

	return 0;
}

