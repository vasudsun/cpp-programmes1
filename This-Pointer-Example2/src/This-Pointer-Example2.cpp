//============================================================================
// Name        : This-Pointer-Example2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Test
{

int x,y;
public:

Test(int param1,int param2):x(param1),y(param2)
{





}

public:
Test& setx(int param)
{

	x=param;

	cout<<"x is written"<<x<<endl;
	return *this;

}

Test& sety(int param)
{

	y=param;
cout<<"y is written"<<y<<endl;
return *this;
}


};
int main() {


	Test ob1(20,30);
	ob1.setx(40).sety(60);



	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
