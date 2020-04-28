//********************************************************************************************** //
//	Author:       Rajas Patil(RJP)
//	Date:         27th April, 2020
//	Description:  Make Base class and another class derived from base class. Finally make a class which is friend of derived class.
//		      3 complex number inputs are taken in each class. Addition is done in derived class (base + derived). 
//		      Subtraction is done in Friend class(base-friend)
//	Version:      g++ version 9.3.0
//
//	This is main.cpp file
//********************************************************************************************** //

#include<iostream>
#include"test.h"

using namespace std;

int main()
{
//Base_Class c;
Derived c1;		//creating object c1 of Class "Derived"
Friend c2;		//creating object c2 of Class "Friend"


c1.input_complex_number_1();	//object c1 used with class "Base_Class" as class "Derived" is derived from "Base_Class"

c1.input_complex_number_2();
c1.add_Complex_Derived();


c2.input_complex_number_3();
c2.subtract_Complex_Friend(c1);



cout << "EEENNDDD OFFF PRRROOOGGRAAAMMM" << endl;



return 0;

}
