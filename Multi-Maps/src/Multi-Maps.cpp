//============================================================================
// Name        : Multimaps.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<map>
#include<iterator>

using namespace std;

int main() {






	multimap<int,string>item;
	item.insert(make_pair(30,"Mike"));
	item.insert(make_pair(10,"vicky"));
	item.insert(make_pair(30,"raj"));
	item.insert(make_pair(20,"bob"));
	item.insert(make_pair(30,"sunil"));






//We make a pair of iterators to iterate over the keys over a range of values

	pair<multimap<int,string>::iterator,multimap<int,string>::iterator> its=
			item.equal_range(20);


	//The first ierator points towrads the start of the element and the last iterator in the above list points
	//towards the end of the iterator.

auto its2=item.equal_range(20);
	for(multimap<int,string>::iterator it=its2.first;it!=its2.second;it++)
	{

		cout<<"First Element is:   "<<it->first<<"second element is : "<<it->second<<endl;

	}


	return 0;
}
