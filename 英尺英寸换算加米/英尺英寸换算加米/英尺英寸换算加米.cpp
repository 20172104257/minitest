// 英尺英寸换算加米.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class Clength
{
private:
	double feet;
	double inche;
public:
	int setvalue()
	{
		cin >> feet >> inche;
		return 0;
	}
	void meterinche()
	{
		int meter;
		cin >> meter;
		int feet = meter*3.2808;
		inche = (meter*3.2808 - feet) * 12;
		cout << feet << "英尺" << inche << "英寸" << endl;
	}

	void display()
	{
		if (inche >= 12) {
			feet = feet + (inche / 12);
			inche = inche - (int)inche % 12;
		}
		cout << "英尺 " << feet << "英寸" << inche << endl;
	}
};
int main()
{
	Clength os;
	//os.setvalue();
	//os.display();
	os.meterinche();
	return 0;
}
