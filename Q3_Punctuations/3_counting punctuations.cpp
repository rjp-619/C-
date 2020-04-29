//********************************************************************************************** //
//	Author:       Rajas Patil(RJP)
//	Date:         4th April, 2020
//	Description:  Counting total Punctuations
//	Version:      g++ version 9.3.0
//
//	This is main.cpp file
//********************************************************************************************** //

#include<iostream>
#include<cstring>
using namespace std;


int main()
{
	char s[]="The qui?ck brown fox, !jumps over the, lazy dog.";
	int count=0;
	for(int i=0; i<strlen(s);i++)
	{
		if(s[i]==',' || s[i]=='.' || s[i]=='?' || s[i]=='!')
			count++;
			
	}
cout << "Total punctuations : " << count << endl;
	printf("%d\n", count);
return 0;


}
