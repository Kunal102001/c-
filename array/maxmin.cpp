#include<iostream>
using namespace std;

int min(int arr[],int n){

    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<min){
            min=arr[i];

        }
    }
    return min;
    
}

int max(int arr[],int n){

    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi=max(arr[i],maxi);

        
    }
    return maxi;
    
}

int main(){

    int n;
    cin>>n;

    int arr[100];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"maxvalue"<<max(arr,n)<<endl;
    cout<<"minvalue"<<min(arr,n)<<endl;
    
}