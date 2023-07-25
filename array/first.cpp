#include<iostream>
using namespace std;

void printarry(int arr[],int size){
for (int i = 0; i <size; i++)
     {
        
        cout<<arr[i]<<"  ";

}
}
int main(){

    int number[15];

    cout<<endl<<"element at index  "<<number[1]<<endl;

    int second[3]={1,2,3};
     cout<<endl<<"element at index "<<second[1]<<endl;


     int third[15]={1,2,3,4};

     int n=15;

     printarry(third,15);
     int fifthsize= sizeof(third)/sizeof(int);
     cout<<endl<<fifthsize<<endl;


     
     }
     















