//============================================================================
// Name        : Plus-Operator-Overloading.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


class ABC{

public:
	int id;

	ABC():id(0)
	{

	}


	ABC(int param):id(param)
	{

	}

	ABC(const ABC &obj3)
	{
		id=obj3.id;


	}
#if 0
	ABC operator+(const ABC &obj1)
	{

		ABC temp;
		temp.id=this->id+obj1.id;

		return  temp;




	}
#endif
	//Method2

#if 1
	const ABC &operator+(const ABC &obj1)
	{


		this->id=this->id+obj1.id;

   return  *this;




	}
#endif


#if 0

	ABC operator+(const ABC &obj1)const
	{
		ABC temp;

		temp.id=this->id+obj1.id;

		return  temp;




	}
#endif
};

int main() {


	ABC ob1(10);

	ABC ob2(20);
	cout<<"Going to print ob3 value: "<<endl;
	ABC ob3=ob1+ob2;

cout<<"ob3 id value is : "<<ob3.id<<endl;






	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
