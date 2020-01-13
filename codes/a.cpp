#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *arr = new int [n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            if(arr[i+1]==0){
                count++;
                if(arr[i+2]==0){
                    count--;
                }
                else if(arr[i+2]==1){
                    count++;
                    i++;
                }
            }
            else if(arr[i+1]==1){
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}