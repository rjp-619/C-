//********************************************************************************************** //
//	Author:       Rajas Patil(RJP)
//	Date:         26th April, 2020
//	Description:  Input Patient Information and sort it. Make a Patient Class.
//	Vesrion:      g++ version 9.3.0
//
//	This is main.cpp file
//********************************************************************************************** //	

#include<iostream>
#include"test.h"

using namespace std;

int main()
{

	int n;

	cout << "Enter total number of Covid19 patients : " << endl;
	cin >> n;

	Patient *no = new Patient[n];			//new operator used to make object no of Class Patient

	for(int i=0; i<n ; i++)
		no[i].input_patient(no);		//Method calling to take input of patient's data in class Patient via object no[i]

	for(int i=0;i<n;i++)
		no[i].display_direct(no);

	Patient::sort(no,n);				

	cout << "The follwing is the sorted list according to age : " << endl;
	
	for(int i=0; i<n; i++)
		no[i].display_direct(no);
	
	cout << "******" << endl;
	return 0;


}
