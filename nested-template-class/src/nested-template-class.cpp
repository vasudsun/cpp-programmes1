//============================================================================
// Name        : nested-template-class.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


template<class T>class Ring {
public:
int count;
	T param1[];
	Ring():count(0){}

	Ring(T value):param1(value){



	}
	~Ring(){}

	//Function1


#if 1
	//FUNCTION 1

	void add(T obj);



	T get(int i);
int size();

#endif
};

template<class T>
void Ring<T>:: add(T obj)
	{

		param1[count]=obj;
		++count;

	}

	template<class T>
	T Ring<T>::get(int j)
	{

		return param1[j];

	}

	template<class T>
int Ring<T>::size()
		{


	return count;
		}





int main() {



	Ring<string>textstring1;
	textstring1.add("sunil");
	textstring1.add("Festo");
	textstring1.add("kerala");
	textstring1.add("karnataka");
for(int i=0;i<textstring1.size();i++)
{

cout<<textstring1.get(i)<<endl;

}




	return 0;
}
