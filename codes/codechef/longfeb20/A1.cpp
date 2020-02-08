#include <iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    
    while (T)
    {
        int n;
        cin>>n;
        int *arr1 = new int [n];
        int *arr2 = new int [n];
        int *cnt = new int [n];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;J++)
            {
                if(arr1[i]-arr2[j]<min)
                {
                    min = arr1[i] - arr2[j];
                }
            }
        }

        
        
        
        T--;
    }
    
    
    
    return 0;
}