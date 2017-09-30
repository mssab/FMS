#include <iostream>
#include <Windows.h>
#include <fstream>

using namespace std;

int main()
{
	/*
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);*/

	
	// difniere ein file stream 
	ofstream schreibDatei;
	//Datei erstellen in bestimmte Pfad
	schreibDatei.open("/users/Mssab/Desktop/ThaliaDatei.txt",ios::app);
	//Datei öffnen
	schreibDatei << "Hallo ich bin Thalia !\n";
	// Datei schließen
	schreibDatei.close();



	//difniere ein ifstream um den Datei zu lessen
	ifstream Thalia;
	//öffne den bestimmte (Pfad) Datei zu lessen 
	Thalia.open("/users/Mssab/Desktop/ThaliaDatei.txt");
	char zeile[100];
	while (!Thalia.eof())
	{
		Thalia.get(zeile,100);
		cout << zeile << endl;
		
	}
	Thalia.close();
	system("pause");
	
	return 0;
}