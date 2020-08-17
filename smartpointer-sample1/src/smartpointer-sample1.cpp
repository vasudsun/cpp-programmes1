//============================================================================
// Name        : smartpointer-sample1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<memory>

using namespace std;

class smartptr{

	int *ptr;


public:

explicit smartptr(int *ptr1=NULL):ptr(ptr1){}


~smartptr(){delete ptr;}

int& operator*(){return *ptr;}





};

int main() {

	smartptr ptr(new int);


	*ptr=56;



	//*pt =*ptr;

cout<<*ptr;


	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
