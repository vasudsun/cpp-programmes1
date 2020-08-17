//============================================================================
// Name        : Stac-Exercise1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<stack>
#include<string>
using namespace std;

class Test{

public:
	string name;
	/*Test():name("")
				{




				}

*/
	Test(string nameparam):name(nameparam)
	{




	}


	~Test()
	{


		cout<<"Object is destroyed"<<endl;
	}

	void print()
	{



		cout<<name<<endl;
	}

};

int main() {

	stack<Test>testStack;
	//Test abc("sunil");

	testStack.push(Test("sunil"));
	//testStack.push(Test("vineeeth"));
	//testStack.push(Test("subhash"));

	cout<<"Festo"<<endl;





	return 0;
}
