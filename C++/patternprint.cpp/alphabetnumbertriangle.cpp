#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n :";
    cin>>n;
    int a=1;
    for(int i=1;i<=n;i++){
        if(i%2==0)
        for(int j=1;j<=i;j++){
            cout<<(char)(a+64)<<" ";
            a++;
            }
        
            else{
                for(int j=1;j<=i;j++){
                    cout<<j<<" ";
                }
                
            }
            cout<<endl;
    }
   
}