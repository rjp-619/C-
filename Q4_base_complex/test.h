//********************************************************************************************** //
//      Author:       Rajas Patil(RJP)
//      Date:         27th April, 2020
//      Description:  Make Base class and another class derived from base class. Finally make a class which is friend of derived class.
//                    3 complex number inputs are taken in each class. Addition is done in derived class (base + derived). 
//                    Subtraction is done in Friend class(base-friend)
//      Version:      g++ version 9.3.0
//
//      This is test.h file
//********************************************************************************************** //



//#include<iostream>

#ifndef TEST_H_
#define TEST_H_

//using namespace std;


class Base_Class{

	protected:
		int r1,i1;
	public:
		void input_complex_number_1();

};


class Derived:public Base_Class{ 	//The Derived Class from the Base Class (I have given the name of Classes same as that of terminology)

	private:
		int r2,i2;
	public:
		void input_complex_number_2();
		void add_Complex_Derived();	

		friend class Friend;		//Creating a friend class "Friend" from Class named "Derived"
};

class Friend{

	private:
		int r3,i3;
	public:
//		int r3,i3;
		void input_complex_number_3();
		void subtract_Complex_Friend(Derived c1);	//Giving parametre object c1 as Class "Derived" is derived from Class "Base_Class" to use int r1 and int i1;
		
};

#endif
