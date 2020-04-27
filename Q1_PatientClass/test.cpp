//********************************************************************************************** //
//      Author:       Rajas Patil(RJP)
//      Date:         26th April, 2020
//      Description:  Input Patient Information and sort it. Make a Patient Class.
//      Vesrion:      g++ version 9.3.0
//
//      This is test.cpp file
//********************************************************************************************** //     



#include<iostream>
#include"test.h"

using namespace std;

void Patient::input_patient(Patient *)
	{
	
		cout << "Enter name : " << endl;
		cin >> name;
		cout << "Enter age" << endl;
		cin >> age;
		cout << "Enter num" << endl;
		cin >> num;
	
	}

void Patient::display_direct(Patient *)
	{
		 cout << "  " << num << ".  The patient " << name << " is of age " << age << endl;
	}

void Patient::sort(Patient *no, int n)
	{
		Patient temp;
		for(int i=0; i<n-1;i++)
			for(int j=i+1; j<n;j++)
				if(no[i].age > no[j].age)
				{
					temp = no[i];
					no[i] = no[j];
					no[j] = temp;
				}


	}
