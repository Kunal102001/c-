#include<iostream>
using namespace std;

int pow(){
    int a,b;
    cin>>a>>b;

    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;



}

int main(){

    

   int answer = pow();
    cout<<answer<<endl;
   int ab = pow();
    cout<<ab<<endl;
      int bc = pow();
    cout<<bc<<endl;
      int bg = pow();
    cout<<bg<<endl;
    
    
    
}