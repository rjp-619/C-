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
