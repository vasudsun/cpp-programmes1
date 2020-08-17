//============================================================================
// Name        : Reference-returning.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;



class ABC
{

public:

	int id;
public:
	ABC():id(0)
	{

	}

	ABC(int param1):id(param1)
	{

	}

	ABC operator+(const ABC &obj)
	{

		ABC temp;

		temp.id=this->id+obj.id;
		return temp;


	}
};
int main() {

ABC x1(90);

ABC x2(30);

ABC x3=x1+x2;


	cout<<x3.id<<endl;
	return 0;
}
