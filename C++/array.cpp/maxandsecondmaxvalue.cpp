#include<iostream>
#include <climits>
using namespace std;
int main(){
    int arr[]={4,5,2,8,7};
    int n=sizeof(arr)/(arr[0]);
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>mx) mx=arr[i];
        mx=max(mx,arr[i]);
    }
    cout<<mx<<" "<<endl;
    int smx=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]!=mx) smx=max(smx,arr[i]);
         }
        cout<<smx<<endl;
}
