#include <iostream>
#include <map>
#include <cstring>

using namespace std;

int main()
{
    short int T;
    cin>>T;
    int arr[4][4];
    int n;
    char c;
    int x;
    map <char,int> m;
    while(T)
    {
        cin>>n;

        for(int i=0;i<n;i++)
        {
            cin>>c;
            cin>>x;
            m[c] = x;
        }

        T--;
    }
}