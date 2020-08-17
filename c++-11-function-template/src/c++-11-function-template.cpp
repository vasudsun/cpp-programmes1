//============================================================================
// Name        : c++-11-function-template.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<memory.h>
using namespace std;


template<class T>
auto test(T a)->decltype(a)
{

return (a+a);

}
int main() {

	auto value=7;

	cout<<test(value)<<endl;
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
