

#include "stdafx.h"
#include <iostream>
#include <Windows.h>

using namespace std;


int main()
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	int y = 0;
	cout << "Weihnachtsbaum:" << endl;
	for (int x = 0; x < 20; x++)
	{
		
		SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY); 
			y = x % 4;
			if (y == 0 && x<16)
			{
				cout << "       *" << endl;
			}
			else if (y == 1 && x<16)
			{
				cout << "     *****" << endl;
			}
			else if (y == 2 && x<16)
			{
				cout << "   *********" << endl;
			}
			else if (y == 3 && x<16)
			{
				cout << "  ***********" << endl;
			}
			else if (y < 4 && x>15)
			{
				cout << "       *" <<endl;
			}
	}


	cout <<endl<<endl<<endl<<endl<< "Nikolaushaus:" << endl;
	for (int s = 0; s <= 8; s++)
	{
		if (s == 0)
		{
			cout << "       **" << endl;
		}
		else if (s == 1)
		{
			cout << "      *  *" << endl;
		}
		else if (s == 2)
		{
			cout << "     *    *" << endl;
		}
		else if (s == 3)
		{
			cout << "    *      *" << endl;
		}
		else if (s == 4 || s == 8)
		{
			cout << "   **********" << endl;
		}
		else if (s == 5 || s == 6 || s == 7)
		{
			cout << "   *        *" << endl;
		}
	}

	cout << endl << endl << endl << endl<<"Nikolaossocke:"<<endl;
	for (int r = 0; r < 14; r++)
	{
		if (r < 3)
		{
			cout << "       **************" << endl;
		}
		else if (r > 2 && r < 6)
		{
			cout << "        ************" << endl;
		}
		else if (r == 7 || r == 13)
		{
			cout << "      **************" << endl;
		}
		else if (r == 6)
		{
			cout << "       *************" << endl;
		}
		else if (r == 8)
		{
			cout << "    ****************" << endl;
		}
		else if (r == 9 || r == 12)
		{
			cout << "  ******************" << endl;
		}
		else if (r == 10 || r == 11)
		{
			cout << "********************" << endl;
		}
		else{}
	}
	cout << endl << endl << endl << endl << "Weihnachtsstern:" << endl;
	for (int a = 0; a < 18; a++)
	{
		if (a == 0 || a == 17)
		{
			cout << "            *" << endl;
		}
		else if (a == 1 || a == 16)
		{
			cout << "           ***" << endl;
		}
		else if (a == 2 || a == 15)
		{
			cout << "          *****" << endl;
		}
		else if (a == 3 || a == 14)
		{
			cout << "         *******" << endl;
		}
		else if (a%4==0 && a<10)
		{
			cout << "        *********" << endl;
		}
		else if (a == 9 || a == 13)
		{
			cout << "        *********" << endl;
		}
		else if (a == 5 || a == 12)
		{
			cout << "***************************" << endl;
		}
		else if (a == 6 || a == 11)
		{
			cout << "   *********************" << endl;
		}
		else if (a == 7 || a == 10)
		{
			cout << "     ***************" << endl;
		}
		else {}
	}
	cout << endl << endl << endl<<endl<<"Das war das schoene Weihnachtsprogramm..."<<endl;
	system("Pause");
    return 0;
}