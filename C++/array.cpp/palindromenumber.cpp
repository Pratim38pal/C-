#include<iostream>
using namespace std;
int main(){
     int n,num,digits,rev=0;
    cout<<"enter the number :";
    cin>>num;
    n=num;
    while(num!=0){
        digits=num%10;
        rev=(rev*10)+digits;
        num=num/10;
    }
    if(n==rev){
        cout<<"palindrom :";
    }
    else {
        cout<<"not a palindrom :";
    }
    return 0;
}