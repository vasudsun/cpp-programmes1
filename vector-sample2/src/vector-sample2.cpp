//============================================================================
// Name        : vector-sample2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<vector>
#include<string>
using namespace std;

int main() {

	vector<string>textstring;
textstring.push_back("sunil");
textstring.push_back("bangalore");
textstring.push_back("fest");
textstring.push_back("opto");
textstring.push_back("radison");

for(vector<string> ::iterator itr=textstring.begin();itr!=textstring.end();itr++)
{

	cout<<*itr<<endl;

}
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
