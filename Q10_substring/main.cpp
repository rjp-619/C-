//********************************************************************************************** //
//	Author:       Rajas Patil(RJP)
//	Date:         29th April, 2020
//	Description:  To find sub string in main string.
//	Version:      g++ version 9.3.0
//
//	This is main.cpp file
//********************************************************************************************** //

#include<iostream>
//#include<cstring>
using namespace std;

int main()
{
	string mainS, subS;
    int sub_len,j,i;
    //char str[]="Trial";
	cin >> mainS >> subS;       //user input of both strings
	cout << "Main string is : " << mainS << "  Sub string is  : " << subS << endl;
    //int len=strlen(str);
    //cout << len << endl;
    
	for(sub_len=0;subS[sub_len] !='\0'; sub_len++);         // counting lenght of sub string (stored in sub_len)
	cout << "The length of substring is : " << sub_len << endl;
	
	for(j=0, i=0;subS[j] != '\0' && mainS[i] != '\0' ;i++)      //Condition- if any one string comes to end (\0), the loop breaks
		{
		    if(mainS[i]==subS[j])
		        j++;
		    else
		        j=0;
		}
	if(j==sub_len)
	        cout << "string found" << endl;
	else
	        cout << "string not found" << endl;


	return 0;


}
