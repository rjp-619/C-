//********************************************************************************************** //
//	Author:       Rajas Patil(RJP)
//	Date:         5th April, 2020
//	Description:  LCM of user input numbers
//	Version:      g++ version 9.3.0
//
//********************************************************************************************** //

#include<iostream>

using namespace std;

int main()
{

    int a,b;
    
    cout << "Input two numbers (Format - 1st number (space) 2nd Number)" << endl;
    cin >> a >> b;

    int m,g,l;
    if(a>b)             // condition to check if a > b or b > a
    	m=b;
    else
    	m=a;
    for(int i=1;i<=m;i++)           //Method to get GCD
    	if(a%i==0 && b%i==0)        
    		g=i;

    l=(a*b)/g;              //Formula for LCM 

    cout << "  The GCD of " << a << " and " << b << " is " << g << endl;
    cout << "  The LCM of " << a << " and " << b << " is " << l << endl;    
    
    return 0;

}




