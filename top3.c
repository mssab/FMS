#include "stdafx.h"
#include <iostream>

using namespace std;

void top8(int x1,int x2 ,int x3)
{
	
	int top1=0;
	int top2 = 0;
	int top3 = 0;

	if (x1>x2 && x1>x3 )
	{
		top1 = x1;
		cout << "top1 ist :" << top1 << endl;
	}
	
	if (x2>x1 && x2>x3)
	{
		top1 = x2;
		cout << "top1 ist :" << top1 << endl;
	}

	if (x3>x1 && x3>x2)
	{
		top1 = x3;
		cout << "top1 ist :" << top1 << endl;
	}
	if (x1>x2 && x1>x3)
	{
		top1 = x1;
		cout << "top1 ist :" << top1 << endl;
	}

	if (x2>x1 && x2>x3)
	{
		top1 = x2;
		cout << "top1 ist :" << top1 << endl;
	}

	if (x3>x1 && x3>x2)
	{
		top1 = x3;
		cout << "top1 ist :" << top1 << endl;
	}



}

	
	
	int main()
{
		top8(5,6,3);
    
	system("pause");
	return 0;
}

