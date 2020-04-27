//********************************************************************************************** //
//      Author:       Rajas Patil(RJP)
//      Date:         26th April, 2020
//      Description:  Input Patient Information and sort it. Make a Patient Class.
//      Vesrion:      g++ version 9.3.0
//
//      This is test.h file
//********************************************************************************************** //     


#ifndef TEST_H_
#define TEST_H_

#include<iostream>

using namespace std;

class Patient{
	public:
		string name;
		int age;
		int num;
		void input_patient(Patient *);
		void display_direct(Patient *);
		static void sort(Patient *no, int n);
};

#endif
