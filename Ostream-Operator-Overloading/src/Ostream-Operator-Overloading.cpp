//============================================================================
// Name        : Ostream-Operator-Overloading.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class ABC
{

	int id;

	friend ostream &operator<<( ostream &obj1,const ABC &obj2);

public:

	ABC(int param1):id(param1){}






};

   ostream &operator<<(ostream &obj1,const ABC &obj2)
 {
	 obj1<<obj2.id<<endl;
	 return obj1;

 }

 int main() {

	 ABC obj3(30);
	 cout<<obj3<<endl;
	 return 0;
}
