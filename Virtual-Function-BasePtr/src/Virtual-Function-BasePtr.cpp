//============================================================================
// Name        : ObjectSlicing.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


class parent
{

public:

	virtual void print()
	{


		cout<<"Displaying from parent class"<<endl;
	}


};


class child:public parent
{


public:

	void print()
	{

		cout<<"Displaying from Child"<<endl;


	}




};





int main() {

	parent *baseptr,b1;

	child c1;

	baseptr=&c1;


	baseptr->print();

	baseptr=&b1;

	baseptr->print();

	return 0;
}
