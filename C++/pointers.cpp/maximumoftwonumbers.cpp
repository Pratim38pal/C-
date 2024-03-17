#include<iostream>
using namespace std;
int maxoftwo(int a,int b){
    if(a>b)  return a;
    else return b;
}
int main(){
    int a;
    cout<<"enter a:";
    cin>>a;
    int b;
    cout<<"enter b:";
    cin>>b;
    cout<<maxoftwo(a,b)<<endl;
}