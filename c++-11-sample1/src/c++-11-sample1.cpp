//============================================================================
// Name        : c++-11-sample1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<typeinfo>
using namespace std;

int main() {

	int c=10;

	decltype(c) newvar=67;

	string obj1="suniol";

	decltype (obj1) obj2="FESTO";

	cout<<newvar<<endl;
	cout<<obj2<<endl;
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
