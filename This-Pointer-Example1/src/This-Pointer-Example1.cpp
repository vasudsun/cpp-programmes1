//============================================================================
// Name        : This-Pointer-Example1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Test
{

	int x;

public:
	void setx(int param)
	{
		this->x=param;

	}
	void print()
	{

	cout<<"x is"<<x<<endl;
	}



};

int main() {

Test ob1;
ob1.setx(20);
ob1.print();

	return 0;
}
