#include<iostream>
using namespace std;

int update(int a){
    a=a-5;
    
    return a;
}

int main(){
    int a=15;
    update(a);
    cout<<(update(a))<<endl;
    cout<<a<<endl;
}