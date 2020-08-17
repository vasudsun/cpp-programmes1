//============================================================================
// Name        : CopyConstructor-Scenario1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class ABC{


public:
	int id;

	ABC():id(0)
	{



	}
	~ABC()
	{

		cout<<"Destructor is called"<<endl;
	}

	ABC(int param):id(param)
	{




	}



	ABC(const ABC &obj)
	{


		cout<<"copy construcotr is called"<<endl;
		id=obj.id;


	}

	ABC operator+(const ABC &obj1)
	{

		ABC temp;
		temp.id=this->id+obj1.id;

		return temp;


	}


/****Scenario1************/

	//Here we are passing the object as value.So copy constructor is called
	ABC changefunc( ABC obj2)
	{

		ABC temp;

		temp.id=obj2.id+89;

		return temp;




	}


	/****Scenario2************/



};



ABC ReceiveObject(const ABC &obj3)
{

	ABC temp1;

	temp1.id=100;


	return temp1;

}


ABC ReturnFunc1(ABC obj5)
{
	ABC temp1;

		temp1.id=100;


		return temp1;



}

ABC ClassObjectReturn( ABC obj4)
{
obj4.id=110;
	return obj4;

}

ABC ReturnTempObject()
{

	ABC temp4;
	temp4.id=98;

	cout<<"Returning Temporary object going to happen"<<endl;
	return temp4;


}

int main() {



	ABC x1(90);

	ABC x2(30);


	///ABC X3=x1+x2;
	ABC X3;
cout<<"//******************************//"<<endl;
	cout<<"calling changeFunction()"<<endl;
	ABC X4=X3.changefunc(x1);
	//X3.changefunc(x1);


	cout<<"calling changeFunction() ends"<<endl;

	cout<<"//******************************//"<<endl;
	//ABC x4=changefunc(x1);

	//ABC X4;
	//Scenario2 when copy construcor is called

	ABC X5=X4;

	ABC X6;

	cout<<"/*********************/"<<endl;
	cout<<"calling ReceiveObject()"<<endl;
	ReceiveObject(X5);
	//cout<<X4.id<<endl;
	cout<<"/*********************/"<<endl;

cout<<"calling ClassObjectReturn()"<<endl;

//Scenario3 .when ReturnFunc() return the object,it calls the copy constructor
//Totally two times,calling the copy constructor
ClassObjectReturn(X6);

cout<<X6.id<<endl;
	cout<<"/*********************/"<<endl;

//Scenario 4--here only one time the copy construcor is ccalled
//Only one time calling the copy constructor
	cout<<"calling ReturnFunc1()"<<endl;
ReturnFunc1(X6);


	cout<<"/*********************/"<<endl;

	cout<<"calling display()"<<endl;

	cout<<"/*********************/"<<endl;

	//Optimization string   -fno-elide-constructors

cout<<"ReturnTempObject starts"<<endl;

ABC obj3=ReturnTempObject();
cout<<obj3.id<<endl;

}
