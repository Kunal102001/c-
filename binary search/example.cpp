#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int key){

    int start=0;
    int end=size-1;

    int mid=(start+end)/2;

    for (;start<=end ;)
    {
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;


        }
        if(key<arr[mid]){
            end= mid-1;
        }
        mid=(start+end)/2;
    }

    return -1;
    



}

int main(){


    int odd[5]={1,2,3,4,5};
    int even[6]={1,2,3,4,5,6};

    int index = binarysearch(odd,5,8);
    cout<<"  index of 8  "<<index<<endl;

}