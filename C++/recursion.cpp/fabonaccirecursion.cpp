#include <iostream>
using namespace std;
int fabo(int n){
    if(n==2 || n==1) return 1;
    return fabo(n-1)+fabo(n-2);
}
int main(){
    int n;
    cout<<"enter n :";
    cin>>n;
    cout<<fabo(n)<<" ";
}