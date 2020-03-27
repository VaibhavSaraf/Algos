#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    int base;
    while(T--)
    {
    	cin>>base;
    	base = base - 2;
        base = base / 2;
        int ans = base * (base+1)/2;
        cout<<ans<<endl;    
    }
	
	return 0;
}