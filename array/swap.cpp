#include<iostream>
using namespace std;

void swap(int arr[],int n){
int start = 0;
int end = (n-1);

    for (; start<=end; )
    {
        swap(arr[start],arr[end]);

        start++;
        end--;
        
    }
    
}



int main(){

    int arr[4]={1,2,3,4};


    swap(arr,4);

    for (int i = 0; i < 4; i++)
    {
        cout<<arr[i]<<" ";
    }
    






}

