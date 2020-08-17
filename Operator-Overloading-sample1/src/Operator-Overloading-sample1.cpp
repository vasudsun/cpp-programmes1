//============================================================================
// Name        : operator-overloading-sample1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class ABC{

public:

	string name;
	int age;
ABC():name(" "),age(0)
	{

	}


	ABC(string nameparam,int ageparam)
	{

		name=nameparam;
		age=ageparam;



	}

	ABC operator+( const ABC &obj ) const
	{

ABC temp;
temp.age=age+obj.age;

return temp;
	}

};



int main() {

	ABC obj1("sunil",21);

	ABC obj2("suchith",45);

	ABC obj3=obj1+obj2;

	cout<<" obj2 modified age is  "<<obj2.age<<endl;
	cout<<"rewritten age is  "<<obj1.age<<endl;


	return 0;
}
