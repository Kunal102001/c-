#include<iostream>
using namespace std;

int arrsum(int arr[],int n){

    int sum =0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];
        /* code */
    }
    return sum;
    
}

int main(){
    int n;
    cin>>n;

    int arr[5];

    
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        /* code */
    }

   cout<<arrsum(arr,n)<<endl;
    
    
    


}