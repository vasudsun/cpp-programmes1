//============================================================================
// Name        : Const-Reference-Return-Sample3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include"Sample.h"
using namespace std;

int main() {


	Sample c1(20,30);
	Sample c2=c1;

	Sample c3(50,60);

	c3=c1;


	cout<<"c3 vlues"<<c3.real<<c3.imaginary<<endl;
	Sample c4(50,50);

	Sample c5(70,70);

	c5.changevalue(c3);

	cout<<"c5 values"<<c5.real<<c5.imaginary<<endl;

	return 0;
}
