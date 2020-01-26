#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool f(int x,int y)
{
    return x>y;
}




int main(){
    vector<int> A = {11,2,1,14,16,3};
    //cout<<A[1]<<endl;
    sort(A.begin(),A.end()); // O(NlogN)
    //cout<<A[2];

    bool present = binary_search(A.begin(),A.end(),3); //true
    present = binary_search(A.begin(),A.end(),4); //false

    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(123);
    //11,2,1,14,16,3,100,100,100,100,123
    vector<int>::iterator it = lower_bound(A.begin(),A.end(),100); //>=
    vector<int>::iterator it2 = upper_bound(A.begin(),A.end(),100); //>

    cout<<*it<<" "<<*it2<<endl;
    cout<<it2-it<<endl;//4

    sort(A.begin(),A.end(),f);
    vector<int>::iterator it3;

    for (it3 = A.begin; it3 !=A.end();it3++)
    {
        cout<<*it3<<" ";
    }



    return 0;
}