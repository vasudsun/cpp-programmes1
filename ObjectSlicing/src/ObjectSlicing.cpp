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
private:
	int one;
public:


	//parent class defualt construcor is mandatory since it will bbe called from
	//the child class to initialize the member variables.
	parent():one(0)
	{


	}

	parent(const parent &obj):one(0)
	{

one=obj.one;

//two=obj.two;//this statement is not correct as we are not sure of passing which subclass to
//parent.So we  are actually slicing off the child class member variables.This is called Object slicing.



	}

	virtual void print()
	{


		cout<<"Displaying from parent class"<<endl;
	}


};


class child:public parent
{

public:
	int two;
public:

	child()
	{


	}

	void print()
	{

		cout<<"Displaying from Child"<<endl;


	}




};





int main() {

	child c1;

	parent &p1=c1;
	p1.print();

	parent p2=child();


	p2.print();



	return 0;
}
