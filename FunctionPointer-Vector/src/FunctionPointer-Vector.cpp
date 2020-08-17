	//============================================================================
	// Name        : FunctionPointer-Vector.cpp
	// Author      :
	// Version     :
	// Copyright   : Your copyright notice
	// Description : Hello World in C++, Ansi-style
	//============================================================================

	#include <iostream>
	#include<vector>
	using namespace std;

	void printnum(int param)
	{

	param=param+5;
		cout<<"Number is "<<param<<endl;
	}


	void ForEach(vector<int> &obj,void(*func)(int))
	{

	for(int vale : obj)
		func(vale);
	}

	int main() {

	void(*sample)(int)=printnum;

		vector<int> type={1,45,67,75,89};
		ForEach(type,sample);

		return 0;
	}
