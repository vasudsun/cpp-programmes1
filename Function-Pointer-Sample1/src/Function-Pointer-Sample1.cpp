//============================================================================
// Name        : Function-Pointer-Sample1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;





	void print()
	{


		cout<<"Function Pointer"<<endl;
	}



int main() {



		void(*ptrPrint)()=print;//Declaring function pointer

		ptrPrint();//Calling function through function pointer




	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
