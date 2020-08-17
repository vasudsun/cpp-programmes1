//============================================================================
// Name        : Maps-customkeyvalues.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<map>
#include<string>
#include<iterator>
using namespace std;


class person
{
public:
	string name;
	int age;

public:

	person():name(""),age(0)
	{



	}
	person(string namestring,int number):name(namestring),age(number)
	{

	}

	person(const person &per)
	{


		name=per.name;
		age=per.age;
	}
	bool operator<(const person &ob1)const
	{
if(name==ob1.name)
{

	return age<ob1.age;

}
else
{
	//	return name<ob1.name;
	return age>ob1.age;
}

	}
	void print()const
	{


		cout<<"age::"<<age<<"  name::"<<name<<endl;

	}
};


int main() {



	map<person,int>temp;

   temp[person("suchith",50)]=60;
   temp[person("john",60)]=70;
   temp[person("Aneesh",83)]=123;
   temp[person("ravan",80)]=40;


	    // Displaying map elements using begin() and end()
	   cout << "The map elements are : "<<endl;
	for (map<person,int>::iterator it=temp.begin(); it !=temp.end(); it++)
	{

		cout <<"value ::"<<it->second<<"   "<<flush;
		it->first.print();


	}














	return 0;
}
