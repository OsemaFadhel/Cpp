#include <iostream>


using namespace std;

int main (){
	
	cout << "I like pizza" << endl
	     << "Pineapple pizza" << endl;
	
	//string example (sequence of text)

	string name = "fazzel";
	cout << "Username: " << name << endl; 

	//integer (whole number) example

	int age = 25;
	cout << age << endl;

	//double (decimal numbers) example

	double price = 3.69;
	cout << price << endl;

	//booleans (true1/false0) example

	bool student = true;
	bool power = false;
	cout << "Student is here:" << student << endl 
		 << "Power available:" << power << endl; 
	
	//single character use ''

	char grade = 'A';
	char dollar_sign = '$';
	cout << "Grade:" << grade << endl 
		 << "Currency:" << dollar_sign << endl;

	
	//const specifies that a variable's value is constant / tells compiler to prevent anything from modifying it
	// read only

	const double pi = 3.14;
	double radius = 10;
	double circumference = 2 * pi * radius;
    cout << "Circle circumference: " << circumference << "cm" << endl;
	
	const int light_speed = 299792458;
    cout << "Light speed: " << light_speed << endl;


	return 0;
	
}
