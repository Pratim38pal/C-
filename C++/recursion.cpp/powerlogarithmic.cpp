#include<iostream>
using namespace std;
int powerlog(int a ,int b){
    if(b==0) return 1;
    if(b%2==0){//even
    return powerlog(a,b/2)*powerlog(a,b/2);
    }
    else{//odd
        return powerlog(a,b/2)*powerlog(a,b/2)*a ;
    }
}
    int main(){
        int a;
        cout<<" enter the base :";
        cin>>a;
        int b;
        cout<<"enter the power :";
        cin>>b;
        cout<<powerlog(a,b);
    }
