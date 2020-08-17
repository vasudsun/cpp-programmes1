//============================================================================
// Name        : Destructor-Copyconstructor.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


class Test
{

public:
	int id;
public:
	Test():id(0)
	{


	}
	Test(int param1):id(param1)
	{



	}

Test(const Test &obj2)
{


	id=obj2.id;
    cout<<"copy constructor call"<<endl;


}
~Test()
{

	cout<<"Destructor is called for id::"<<id<<endl;



}






};
Test SampleFunction(Test &obj)
	{


		Test temp;
		temp.id=obj.id+20;

		return temp;

	}

int main() {


Test a1(10);
cout<<"/n/n"<<endl;
cout<<"Starting function call"<<endl;

SampleFunction(a1);
//a1.id=50;

cout<<"Main is going to end"<<endl;
	return 0;
}
