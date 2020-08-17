//============================================================================
// Name        : Vector-STL-Sample1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<vector>
#include<iterator>
using namespace std;

class ABC
{


	string name;
	ABC(string nameparam):name(nameparam)
	{

	}

	bool comp(const ABC &obj1,const ABC &obj2)const
	{

	return obj1.name<obj2.name;



	}
};

int main() {

	vector<ABC>object;
	object.push_back(ABC("festo"));

	object.push_back(ABC("Amitabh"));
	object.push_back(ABC("california"));
	object.push_back(ABC("london"));
	object.push_back(ABC("bengalore"));

	sort(object.begin(),object.end());

	for(int i=0;i<object.size();i++)
	{


		cout<<object[i].name<<endl;

	}




	return 0;
}
