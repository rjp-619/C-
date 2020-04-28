//********************************************************************************************** //
//	Author:       Rajas Patil(RJP)
//	Date:         28th April, 2020
//	Description:  Toll Plaza Vehicle toll calculation.
//		      2-wheeler,3-wheeler,4-wheeler,heavy vehicles base prices is 20,30,40,60 respectively 
//		      and extra fine per person is 10,20,40,10 respectively.
//	Version:      g++ version 9.3.0
//
//	This is main.cpp file
//********************************************************************************************** //

#include<iostream>

using namespace std;

int main()
	{
	
	int t;
while(1){
	cout << "Choose the type of vehicle : \n 2->Two wheeler\n 3->Three Wheelr\n 4-> Four wheeler\n 5->Heavy Vehicles" << endl;
	cin >> t;
	switch(t)
	{
		case(2):
			{
			int p,Amount;
			cout << "Number of persons ?" << endl;
			cin >> p;
			if(p>2)
				Amount = 10*(p-2) + 20;
			else
				Amount = 20;
			cout << "The Toll Charge is : " << Amount << endl;
			break;
			}
		case(3):
			{
			int p,Amount;
			cout << "Number of persons ?" << endl;
			cin >> p;
			if(p>3)
				Amount = 20*(p-3) + 30;
			else
				Amount = 30;
			cout << "The Toll Charge is : " << Amount << endl;
			break;
			}
	
		case(4):
			{
			int p,Amount;
			cout << "Number of persons ?" << endl;
			cin >> p;
			if(p>4)
				Amount = 40*(p-4) + 40;
			else
				Amount = 40;
			cout << "The Toll Charge is : " << Amount << endl;
			break;
			}
	
		case(5):
			{
			int p,Amount;
			cout << "Number of persons ?" << endl;
			cin >> p;
			if(p>6)
				Amount = 10*(p-6) + 60;
			else
				Amount = 60;
			cout << "The Toll Charge is : " << Amount << endl;
			break;
			}

		case(0):
			{
				exit(0);
			}
		default:
			{
			cout << "**************Wrong Input*************\n" << endl;
			break;
			}
	
	}
}
	return 0;
	
	}
