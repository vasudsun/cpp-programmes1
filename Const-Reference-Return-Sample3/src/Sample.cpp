/*
 * Sample.cpp
 *
 *  Created on: 15-May-2019
 *      Author: sunil
 */

#include "Sample.h"


Sample::Sample(int param1,int param2):real(param1),imaginary(param2)
{


}

Sample::Sample(const Sample &obj)
{

	cout<<"copy constructor has been called"<<endl;


}
const Sample &Sample::operator=(const Sample &obj)
{

	this->real=obj.real;
	this->imaginary=obj.imaginary;
	return *this;
cout<<"Assignment operator has been called"<<endl;
}

const Sample &Sample::changevalue(const Sample &obj)
{
	Sample temp;

	temp.real=obj.real+20;
	temp.imaginary=obj.imaginary+20;
	return temp;


}
Sample::~Sample() {

}
