/*
 * complex.h
 *
 *  Created on: 15-May-2019
 *      Author: sunil
 */

#ifndef COMPLEX_H_
#define COMPLEX_H_

#include<iostream>
using namespace std;

class complex {

private:

	int real,imaginary;
public:
	complex();
	complex(int param1,int param2):real(param1),imaginary(param2)
	{

	}
	complex(const complex & obj);
complex & operator=(const complex &obj);

	virtual ~complex();
};

#endif /* COMPLEX_H_ */
