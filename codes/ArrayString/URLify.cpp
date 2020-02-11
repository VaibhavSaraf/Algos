#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	string s;
	int count = 0;
	getline(cin,s);
	cin.ignore(0);

	int n = s.length();

	for(int i=0;i<n+1;i++)
	{
		if(s[i]==' ')
		{
			if(s[i-1]==' ' || s[i-1] == '\0')
			{
				s[i]='\0';
			}
		}
	}

	for(int i=n;i>0;i--)
	{
		if(s[i]==' ' || s[i]=='\0')
		{
			count++;
		}
		else
		{
			break;
		}
	}
		
	for(int i=0;i<n-count;i++)
	{
		if(s[i]==' ')
		{
			cout<<"%20";
		}
		else
		{
			cout<<s[i];	
		}
	}
	return 0;
}