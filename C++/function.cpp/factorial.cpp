#include<iostream>
#include<Cmath>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=0;i<=x;i++){
        f*=(1);
    }
    return f;
}
int ncr(int n,int r){
    int a=fact(n);
    int b=fact(r);
    int c=fact(n-r);
    return a/(b*c);
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    int r;
    cout<<"enter r :";
    cin>>r;
    // int a=fact(n);
    // int b=fact(r);
    // int c=fact(n-r);
    // cout<<fact(n)/(fact(r)*fact(n-r))<<endl;
    cout<<ncr(n,r);
}