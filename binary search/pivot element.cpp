#include<iostream>
using namespace std;

int leftsum(int arr[],int size){
    
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int sumleft =0;
    
    for (int i = 0; i < mid; i++)
    {
        sumleft=sumleft+arr[i];
       
    }
    return sumleft;
    
}

int rightsum(int arr[],int size){
    int s=0;
    int e=size-1;
    int sumright =0;
    int mid=s+(e-s)/2;
    for (int i = mid+1; i < size; i++)
    {
        sumright=sumright+arr[i];
       
    }
    return sumright;
    
}
int pivotelement(int arr[],int size,int key){
      int s=0;
      int e=size-1;
      int mid=s-(e-s)/2;
      int sumleft=leftsum(arr,size);
      int sumright=rightsum(arr,size);
      while(s<e)
      {
        if(sumleft==sumright){
            return mid;
        }
        else if(sumleft>sumright){
            mid=mid-1;

        }
        else if(sumleft<sumright){
            mid=mid+1;
        }
    

       
      }
      return -1;
      


}

int main(){
    int key;
    cin>>key;
    int arr[5]={1,2,3,4,6};

   int pivot= pivotelement(arr,5,key);
   cout<<"the pivot element is"<<pivot<<endl;

}