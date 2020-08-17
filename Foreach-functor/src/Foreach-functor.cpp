//============================================================================
// Name        : Foreach-functor.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<algorithm>
using namespace std;

class Name{
	int total;
public:

	Name():total(0){}

	void operator()(int element)
	{

		element=element+10;
	}
};

int main() {


	Name obj;

	int arr[]={1,2,3,4,5,6};
	for_each(arr,arr+5,obj);


	for(int a=0;a<6;a++)
		cout<<arr[a]<<endl;
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
