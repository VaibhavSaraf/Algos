#include <iostream>
#include <cstring>
using namespace std;

string singleStep(string s1)
{
	char s = s1[0];
	for(int i=0;i<s1.length();i++)
	{
		s1[i] = s1[i+1];
		//cout<<s1[i]<<endl;
	}
	s1[(s1.length()-1)]=s;
	return s1;
}

bool checkPermutation(string s1, string s2)
{
	if(s1.length()!=s2.length())
	{
		return false;
	}
	for(int i=0;i<s1.length();i++)
	{
		if(s1==s2)
		{
			return true;
			break;
		}
		else
		{
			s2 = singleStep(s2);
		}
	}
	return false;
}
int main()
{
    string s1,s2;
    cin>>s1;
	cin>>s2;
    if(checkPermutation(s1,s2))
     	cout<<"Yes"<<endl;
    else
     	cout<<"No"<<endl;
	
    return 0;
}
