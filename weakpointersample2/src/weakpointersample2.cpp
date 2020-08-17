//============================================================================
// Name        : WeakPointer_sample.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<memory>
#include<string>
using namespace std;

class Dog{

weak_ptr<Dog>m_pfriend;
public:
  string m_Name;
  Dog(string param):m_Name(param)
  {


  }
~Dog()
{
cout<<"Destructor called"<<endl;

}

void makemyfriend(shared_ptr<Dog> f)
{
	m_pfriend=f;


}
};

int main() {

	shared_ptr<Dog>pD(new Dog("Gunner"));
	shared_ptr<Dog>pD2(new Dog("smokey"));

	pD->makemyfriend(pD2);
	pD2->makemyfriend(pD);
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
