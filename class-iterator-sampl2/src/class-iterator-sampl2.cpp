//============================================================================
// Name        : class-iterator-sampl2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string>
#include"ring.h"
//#include<sample.h>
using namespace std;

int main() {


	ring<string>textstring(3);
	textstring.add("sunil");
	textstring.add("suchith");
	textstring.add("festo");
	//textstring.add("bangalore");

	cout<<textstring.receive(2)<<endl;

#if 0
	for(vector<string> ::iterator itr=textstring.begin();itr!=textstring.end();itr++)
	{

		cout<<*itr<<endl;

	}

#endif











	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
