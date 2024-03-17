#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,4,2,8,6,9,3,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    //insertion sort
    for(int i=0;i<(n-1);i++){//no. of passes.
        int j=i+1;
        while( j>=1 && arr[j]<arr[j-1]){
            swap( arr[j], arr[j-1]);
            j--;
        }

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


