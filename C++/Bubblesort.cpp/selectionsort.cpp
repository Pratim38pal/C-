#include<iostream>
using namespace std;
int main(){
    int arr[]={4,0,5,8,3,6,4,0,2,5,9,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    //selection sort
    for(int i=0;i<(n-1);i++){ //no.of passes
    int mn =__INT_MAX__ ;
    int mindx = -1 ;
    for(int j=i; j<n;j++){
        if(mn>arr[j]){
            mn=arr[j];
            mindx=j ;
        }
    }
    swap(arr[i],arr[mindx]);

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}