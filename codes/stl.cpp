#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
using namespace std;
bool f(int x, int y)
{
    return x > y;
}
void vector_demo()
{
    vector<int> A = {11, 2, 3, 14};
    //cout<<A[1]<<endl;
    sort(A.begin(), A.end()); // O(NlogN)
    //cout<<A[2];

    bool present = binary_search(A.begin(), A.end(), 3); //true
    present = binary_search(A.begin(), A.end(), 4);      //false

    A.push_back(100);
    present = binary_search(A.begin(), A.end(), 100); //true
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    //11,2,3,14,100,100,100,100,100,123
    A.push_back(123);
    // iterator of vector
    vector<int>::iterator it = lower_bound(A.begin(), A.end(), 100); //>=
    //first element that occur like 100

    // vector<int>::iterator it2 = upper_bound(A.begin(), A.end(), 100); //>
    //above line can also be written as
    auto it2 = upper_bound(A.begin(), A.end(), 100);
    //first element just after given number 100 is 123

    cout << *it << " " << *it2 << endl;
    cout << it2 - it << endl; //4 O(1) time

    sort(A.begin(), A.end(), f);
    // f() is comparator function which sort array to decending order
    vector<int>::iterator it3;
    /*
    for (it3 = A.begin(); it3 !=A.end();it3++)
    {
        cout<<*it3<<" ";
    }
    */
    //Same as above
    for (int x : A)
    {
        cout << x << " ";
    }
    cout << endl;
    // I want iterate and also change the values in vector then
    for (int &x : A)
    {
        x++;
        cout << x << " ";
    }
    cout << endl;
}

void set_demo()
{
    //set always add number in ascending order
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(-1);
    s.insert(-10);
    for(int x : s)
    {
        cout<< x << "  ";
    }
    cout<<endl;
    //-10,-1,1,2
    auto it = s.find(-1); // finding -1
    if(it == s.end())
    {
        cout<<"Not present"; // if not present then iterator goes to end of set means s.end
    }
    else{
        cout << "Present \n";
        cout << *it << endl;
    }
    auto it2 = s.upper_bound(-1); // 1
    auto it3 = s.upper_bound(0);
    cout << *it2 << " " << *it3 << endl;

    auto it4 = s.upper_bound(2);
    if( it4 == s.end())
    {
        cout << "oops! sorry can't find something like that !"<<endl;
    }
    s.erase(1); //delete element from set in O(logN)
    for(int x : s)
    {
        cout<< x <<" ";
    }
    cout<<endl;
}
void map_demo()
{
    map<int, int> A;
    A[1] = 100; 
    A[2] = -1;
    A[3] = 200;
    A[100000232] = 1;
    map<char,int> cnt;
    string x = "vaibhav saraf";
    for (char c : x)
    {
        cnt[c]++;
    }
    cout << cnt['a'] << " " << cnt['z'] << endl;
    //find and delete key
    auto it = A.find(1);
    if(it == A.end())
    {
        cout<<"not present";
    }
    else {
        cout<<"present";
        // cout << *it[1] <<endl;
    }
    // A.erase(1); //for deleting element    
}
void PowerofStl()
{
    // [x,y]
    // add [2,3]
    // add [10,20]
    // add [30,400]
    // add [401,450]
    // give me the interval 401
    set < pair<int, int> > s;
    // {a,b} and {c,d}
    // a < c
    //     a == c, c < d
    s.insert({30,400});
    s.insert({10,20});
    s.insert({401,450});
    s.insert({2,3});
    // {10,INT16_MAX}
    
    int point  = 401;
    auto it = s.upper_bound({point,INT64_MAX});
    if(it == s.begin())
    {
        cout << "the given point is not lying in any interval..\n";
        return;
    }
    it --;
    pair<int,int> current = *it;
    if(current.first <= point && point <= current.second)
    {
        cout<< "yes its present: "<< current.first <<"  "<< current.second <<endl;
    }
    else 
    {
        cout << " the given point is not lying in any intervel..\n";
    }

}
int main()
{
    // vector_demo();
    // set_demo();
    // map_demo();
    PowerofStl();
    return 0;
}