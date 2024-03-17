#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,1,4,6,8,9,0,-2};
    int n = sizeof(arr)/sizeof(arr[0]);
    //bubble sort optimise
    for(int i=0; i<=n-1;i++){//no. of passes
    bool flag = true;
       for(int j=0;j<(n-1);j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            flag=false;
        }
       }
    if(flag==true) break;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}