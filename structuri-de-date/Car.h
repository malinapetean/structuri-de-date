#include<iostream>
#include<string>

using namespace std;

struct Car {
	int year;
	string brand="";
	string color="";

	string afisare()
	{
		string text = "";
		text += "Car brand: " + brand+"\n";
		text += "Car color: " + color+"\n";
		text += "Car year: " + to_string(year)+"\n";
		return text;
	}
};