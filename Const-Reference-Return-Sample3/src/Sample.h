/*
 * Sample.h
 *
 *  Created on: 15-May-2019
 *      Author: sunil
 */

#ifndef SAMPLE_H_
#define SAMPLE_H_
#include<iostream>
using namespace std;
class Sample {
public:
	int real,imaginary;
public:
	Sample():real(0),imaginary(0){}

	Sample(int param1,int param2);

	Sample(const Sample &obj);
	const Sample& changevalue(const Sample &obj1);

	const Sample &operator=(const Sample &obj);
	virtual ~Sample();
};

#endif /* SAMPLE_H_ */
