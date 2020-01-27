#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void prime(int n)
{
    //first create bool array to store if index no is prime or not
    bool prime[n+1];
    //using memset we initialize the array
    memset(prime,true,sizeof(prime));
    //now from sieve logic we should perform task on arrays :
    /*
        1.  Create a list of consecutive integers from 2 to n: (2, 3, 4, …, n).

        2.  Initially, let p equal 2, the first prime number.

        3.  Starting from p2, count up in increments of p and mark each of these numbers 
            greater than or equal to p2 itself in the list. These numbers will be p(p+1), p(p+2), p(p+3), etc..

        4.  Find the first number greater than p in the list that is not marked. 
            If there was no such number, stop. Otherwise, let p now equal this number (which is the next prime),
            and repeat from step 3.s
    */
    for(int p=2; p*p<=n; p++)
    {
        if(prime[p]==true)
        {
            for(int i=p*p;i<=n;i=i+p)
            {
                prime[i]=false;
            }
        }
    }
    //print all prime no.
    for(int i=2;i<=n;i++)
    {
        if(prime[i])
        {
            cout<<" "<<i;
        }
    }
    
}

int main()
{

    cout<<"Enter the Number: "<<endl;
    int n;
    cin>>n;
    //calling that function
    prime(n);
    cout<<endl;
    return 0;
}