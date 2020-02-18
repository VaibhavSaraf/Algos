#include <iostream>
#include <cstring>
#include <map>
using namespace std;

int main()
{
	string s1;
	cin>>s1;
	int n = s1.length();
	map<char,int> m;
	for(char c : s1)
	{
		m[c]++;
	}
	char x;
	int count = 0;
	for(char c : s1)
	{
		if(x!=c)
		{
			x=c;
			count=count+2;
		}
	}
	char y;
	if(n>count)
	{
		for(char c : s1)
		{
			if(y!=c)
			{	
				y=c;
				cout<<c<<m[c];
			}
		}	
	}
	else
	{
		cout<<"invalid";
	}
	return 0;
}