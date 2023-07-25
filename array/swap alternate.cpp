#include<iostream>
using namespace std;

void swapalternate(int arr[],int n){

    for (int i = 0; i < n; i+=2)
    {
        swap(arr[i],arr[i+1]);

        
        /* code */
    }
    
    
}

int main(){
int arr[5]={2,3,4,2,4};

 swapalternate(arr,5);

}
