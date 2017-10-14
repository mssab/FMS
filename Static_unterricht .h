#include <iostream>
#include <Windows.h>
#include <fstream>

using namespace std;

class men
{
public:
	int age;
	static int type;
	static void display() {
		cout << "Hey this is static !" << endl;
	}
};
int men::type = 1;

int main()
{
	//men m1;
	//m1.age = 20;
	//cout << "Your Age :" << m1.age << "Your type :" << m1.type << endl;
	////test : comment men m2  
	//men m2;
	//m2.age = 40;
	//cout << "Your Age:" << m2.age << "your type:" << m2.type << endl;
	men::display();
	system("pause");
	
	return 0;
}