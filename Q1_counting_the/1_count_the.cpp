//********************************************************************************************** //
//	Author:       Rajas Patil(RJP)
//	Date:         4th April, 2020
//	Description:  Counting number of 'the' in given string
//	Version:      g++ version 9.3.0
//
//	This is main.cpp file
//********************************************************************************************** //

#include<iostream>
#include<cstring>		//For using strlen()

using namespace std;
int main()
{
	char s[]="The string where the word the present more than once";	//using pre input, can user input too using cin >> <name of string defined>
	

	int p=0;
	p=strlen(s);
	
	cout << "the length is " << p << endl;
	int count=0;
	for(int i=0;i<strlen(s);)
	{
		if(s[i]=='t' || s[i]=='T')		//This condition or the one below could be used according to required output
	//	if(s[i]=='t')
		{i++;
			if(s[i]=='h')
			{i++;
				if(s[i]=='e')
				{	i++;
					count++;
				}
				else
					i++;
			}
			else
				i++;
		}
		else
			i++;
	}
	
	cout << "The frequency of the word \"the\" is : " << count << endl;
	return 0;

	


}
