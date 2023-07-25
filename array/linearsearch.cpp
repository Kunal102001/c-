#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){

    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            return 1;
            /* code */
        }
        
    }
    return 0;
    


}
 
int main(){

    int key;
    cin>>key;
    


    int arr[5]={1,2,3,4,5};

    if(search(arr,108,key)){
        cout<<"yes present";

    }
    else{
        cout<<"not present";
    }


}