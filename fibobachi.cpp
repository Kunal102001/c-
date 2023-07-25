#include<iostream>
using namespace std;


void fibo(int n){

    int a=0;
    int b=1;
    cout<<a<<endl<<b<<endl;
    int nextnum=0;
    for (int i = 3; i <=n; i++)
    {
        nextnum=a+b;
        a=b;
        b=nextnum;
        
        cout<<nextnum<<endl;
    }
    return;
    
    
    


}

int main(){

    int n;
    cin>>n;

    fibo(n);
    


}