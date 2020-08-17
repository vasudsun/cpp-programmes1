//============================================================================
// Name        : c++-11-Sample2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

auto test()->int
{


	return 67;
}

int main() {

	auto value=7;

	auto strvariabl="Bangalore";
	cout << value << strvariabl; // prints !!!Hello World!!!
	cout<<test()<<endl;
	return 0;
}
