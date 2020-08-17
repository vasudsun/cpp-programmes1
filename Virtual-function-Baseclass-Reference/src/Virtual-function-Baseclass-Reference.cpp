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

void f(parent &r)
{

	r.print();

}




int main() {

	parent b;

	child c1;

	f(b);

	f(c1);

	return 0;
}
