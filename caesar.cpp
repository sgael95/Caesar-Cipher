#include <iostream>
using namespace std;

//This function receives text and shift and returns the encrypted text
string encrypt(string text,int s)
{
	string result="";
	//traverse text
	for(int i=0;i<text.length();i++)
	{
		//apply transformation to each character
		//Encrypt Uppercase letters
		if(isupper(text[i]))
			result+=char(int(text[i]+s-65)%26 +65);
	//Encrypt Lowercase letters
	else
		result+=char(int(text[i]+s-97)%26 +97);
	}
	//Return the resulting string
	return result;
}

//Driver program to test the above function
int main()
{
	string text="EXXEGOEXSRGI";
	int s = 4;

	
	cout<<"Text :"<<text;
	cout<<"\nShift:" << s;
	s = s%26; // ensuring that s lies between 0-25
	cout<<"\nCipher:"<<encrypt(text, 26-s)<<"\n";
	return 0;
}

