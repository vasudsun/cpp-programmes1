//============================================================================
// Name        : WeakPointer_sample.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<memory>
using namespace std;

class Dog{

weak_ptr<Dog>m_pfriend;

};

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
