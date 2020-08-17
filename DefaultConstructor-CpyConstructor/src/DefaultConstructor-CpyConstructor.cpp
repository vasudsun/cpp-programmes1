//============================================================================
// Name        : DefaultConstructor-CpyConstructor.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class ABC{
private:
	int i;

public:


ABC()
{



}
	ABC(const ABC &obj)
	{


		cout<<"Copy constructor is called"<<endl;
	}
};

int main() {

	ABC obj;
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
