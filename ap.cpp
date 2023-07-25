#include<iostream>
using namespace std;

int ap(int n){

    int apterm=3*n+7;

    return apterm;
}

int main(){

    int n;
    cin>>n;

    ap(n);
    cout<<"the term is"<<ap(n)<<endl;
}