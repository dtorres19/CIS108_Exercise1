#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
   
	/*string current_age;
	int age;
	int new_age = 10;
	cout << "Enter your age: ";
	getline (cin, current_age);

	cout << "In ten years you will be " << new_age << " years old\n";
	*/
	
	int age;
	cout << "Enter your age: ";
	cin >> age;
	int  new_age = age + 10;
	cout << "In ten years you will be " << new_age << " years old\n";
	cout << endl;

	int temp;
	cout << "Enter the temperature in degrees F: ";
	cin >> temp;
	int cel = (temp - 32) * 0.556;
	cout << "The temperature in celsius is " << cel << ".";


	string y;
	cout << "Sandwich Type: ";
	getline (cin, y);
	cout << "Creating " << y;
	cout << " Sandwich." << endl;
	cout << "Press enter to exit...";
	getline (cin, y);



	return 0;


}

