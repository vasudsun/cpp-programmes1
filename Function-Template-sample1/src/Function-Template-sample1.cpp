//============================================================================
// Name        : Function-Template-sample1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


template <class X >void swapargs(X &a,X &b)
{

X temp=a;

a=b;

b=temp;



}

template <class T>void print(T a)
{

cout<<a<<endl;
}

int main() {


	int i=10,j=20;

	double d1=10.23,d2=14.56;

	swapargs(i,j);
	swapargs(d1,d2);
	print("sunil");
	print(1);

	//Method 2

	print<string>("kallahalli");
	print<int>(100);

	cout<<"i: "<<i<<"j: "<<j<<endl;
	cout<<"d1: "<<d1<<"d2: "<<d2<<endl;

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
