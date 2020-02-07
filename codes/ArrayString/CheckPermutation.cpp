#include <iostream>
#include <cstring>
using namespace std;
int mod(int x)
{
	if(x>0)
		return x;
	else
		return -x;
}

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
	if(s1.length()==s2.length())
	{
		return false;
	}
	int n = s1.length();
	while(n)
	{
		
		n--;
	}
	
}
int main()
{
    string s1,s2;
    cin>>s1;
    // cin>>s2;
    // if(checkPermutation(s1,s2))
    // 	cout<<"Yes"<<endl;
    // else
    // 	cout<<"No"<<endl;
    s1=singleStep(s1);
    return 0;
}