//============================================================================
// Name        : Maps-sample2.cpp
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

int main() {


	multimap<int,string>item;
	item.insert(make_pair(30,"Mike"));
	item.insert(make_pair(10,"vicky"));
	item.insert(make_pair(30,"raj"));
	item.insert(make_pair(20,"bob"));





	for(map<int,string>::iterator it=item.begin();it!=item.end();it++)
	{
cout<<it->first<<"::"<<it->second<<endl;



	}



	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
