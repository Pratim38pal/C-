#include<iostream>
#include<cmath>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f*=1;
    }
    return f;
}
int ncr(int n,int r){
    // int a=fact(n);
    // int b=fact(r);
    // int c=fact(n-r);
    // return a/(b*c);
    return fact(n)/(fact(r)*fact(n-r));

}
int main(){
    int n;
    cout<<" enter n :";
    cin>>n;
    // int r;
    // cout<<"enter r :";
    // cin>>r;

for(int i=0;i<=n;i++){//rows print
    for(int j=0;j<=(n-i-1);j++){//spaces print
        cout<<" ";
    }
    for(int j=0;j<=(i);j++){//numbers print
        cout<<ncr(i,j)<<" ";
    }
    cout<<endl;


}
}