//********************************************************************************************** //
//      Author:       Rajas Patil(RJP)
//      Date:         27th April, 2020
//      Description:  Make Base class and another class derived from base class. Finally make a class which is friend of derived class.
//                    3 complex number inputs are taken in each class. Addition is done in derived class (base + derived). 
//                    Subtraction is done in Friend class(base-friend)
//      Version:      g++ version 9.3.0
//
//      This is test.cpp file
//********************************************************************************************** //


#include<iostream>
#include"test.h"

using namespace std;

void Base_Class::input_complex_number_1(){
	cout << "            B A S E " << endl;

	cout << "Enter the numbers in the format : real imaginary" << endl;
	cin >> r1 >> i1;
}


void Derived::input_complex_number_2(){
	cout << "         D E R I V E D" << endl; 
	cout << "Enter the numbers in the format : real imaginary" << endl;
	cin >> r2 >> i2;
}

void Derived::add_Complex_Derived(){
	int add_r, add_i;
	add_r=r1+r2;
	add_i=i1+i2;

	cout << " The Addition of complex numbers from Base and derived class is " << add_r << " + " << add_i << "i" << endl;

}


void Friend::input_complex_number_3(){
	cout << "     F R I E N D" << endl;
        cout << "Enter the numbers in the format : real imaginary" << endl;
        cin >> r3 >> i3;
}

void Friend::subtract_Complex_Friend(Derived c1){
        int sub_r, sub_i;
        sub_r=c1.r1-r3;
        sub_i=c1.i1-i3;

        cout << " The Subtraction of complex numbers of Friend From Base class results  " << sub_r << " + " << sub_i << "i" << endl;


}

