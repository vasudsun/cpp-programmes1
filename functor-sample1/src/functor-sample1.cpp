//============================================================================
// Name        : functor-sample1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class increment
{

	int num;
public:
	increment(int num_param):num(num_param){ }

	int operator()(int arr_num)
	{
		cout<<"arr_num:"<<arr_num<<"  num:"<<num<<"functor is called"<<endl;
		return num+arr_num;
	}

};

int main() {

int arr[]={1,2,3,4,5};

int n=sizeof(arr)/sizeof(arr[0]);



int to_add=5;

transform(arr,arr+n,arr,increment(to_add));






	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
