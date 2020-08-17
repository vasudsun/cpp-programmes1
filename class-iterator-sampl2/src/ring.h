/*
 * ring.h
 *
 *  Created on: 12-Jun-2019
 *      Author: sunil
 */

#ifndef RING_H_
#define RING_H_
#include<iostream>
using namespace std;


template<class T>
class ring
{

public:

	int size;
	T *arr;

	int array_count;


public:

	ring(int count):size(count),arr(NULL),array_count(0)
	{

		arr=new T[size];


	}
	void add(T obj);
	/*
	void add(T obj)
	{
    arr[array_count]=obj;

    array_count++;
	}*/

	T& receive(int reference)
	{


		return arr[reference];

	}

	T& begin()
	{



	}

	T& end()
	{



	}
	~ring()
	{


		delete[]arr;
	}

};

template<class T>
void ring<T>::add(T obj)
{

	 arr[array_count]=obj;

	    array_count++;



}






#endif /* RING_H_ */
