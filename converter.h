// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

float tempo_converter(float);
float millezukilo_converter(float);
float zollzumeter_converter(float);

int main();
int main() {

	system("color f0");

	char option;
	float T_fahrenheit;
	float T_Celsius;
	float km;
	float meter;

	cout << "******************************* Giannakis und Obeado Umrechnner *********************\n";
	cout << "\t\t\t Druck mal A um Fahrenheit zu Celcius Grad um zuwendeln \n";
	cout << "\t\t\t Druck mal B um Kilometer zu Mille um zuwendeln \n";
	cout << "\t\t\t Druck mal C um Zoll zu Meter um zuwendeln \n";
	cin >> option;

	if (option == 'A' || option == 'a')
	{
		cout << "\t\t\t******* Farhenheit zu Celsius Rechner \n";
		cout << "Gib mal bitte den Grad ein \n";

		cin >> T_fahrenheit;
		T_Celsius = tempo_converter(T_fahrenheit);

		cout <<"\t"<< T_fahrenheit << " Grad in Fahrenheit ist " << T_Celsius << " Grad in Celsius.\n";

	}

	if (option == 'B' || option == 'b')
	{
		cout << "\t\t\t******* Mille zu Kilometer Rechner \n";
		cout << "Gib mal bitte den Mille ein \n";
		float mille;
		cin >> mille;
		km = millezukilo_converter(mille);

		cout << "\t" << mille << " in Mille ist " << km << "  in Kilometer.\n";

	}

	if (option == 'C' || option == 'c')
	{
		cout << "\t\t\t******* Zoll zu Meter Rechner \n";
		cout << "Gib mal bitte den Zoll ein \n";
		float zoll;
		cin >> zoll;
		meter = zollzumeter_converter(zoll);
		

		cout << "\t" << zoll << " in Zoll ist " << meter << "  in Meter.\n";

	}
	

	cout << "Um weiter zu rechnen druck mal 'J' oder 'N' zu raus\n";
	cin >> option;
	if(option=='J' || option=='j')
	{
		main();
	}

	system("Pause");
	return 0;

}

float tempo_converter(float tmepratur) {
	float cilsuis;
	cilsuis = ((tmepratur - 32) * 5) / 9;

	return cilsuis;

}

float millezukilo_converter(float mille) {

	float km;
	km = (mille * 1.60934);
	return km;
}
	
float zollzumeter_converter(float zoll) {
	float meter;
	meter = (zoll * 0.0254);
	return meter;
}
