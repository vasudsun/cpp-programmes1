/*
 * complex.cpp
 *
 *  Created on: 15-May-2019
 *      Author: sunil
 */

#include "complex.h"

complex::complex():real(0),imaginary(0) {


}
complex::complex(int param1,int param2):real(param1),imaginary(param2)
{


}

complex::complex(const complex &obj)
{

	cout<<"copy constructor"<<endl;
	real=obj.real;
	imaginary=obj.imaginary;


}

 complex & complex::operator=(const complex &obj)
{


	///this->real=obj.real;
	//this->imaginary=obj.imaginary;
	return *this;

}

complex::~complex() {

}
