//============================================================================
// Name        : Independent-reference-example1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;







int main() {

	int a;
	float f=19.87;
	int &ref=a;
	a=10;

	cout<<ref<<endl;
	ref=f;
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
