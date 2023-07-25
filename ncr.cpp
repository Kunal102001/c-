#include<iostream>
using namespace std;

int factoril(int num){
    
int fact=1;
for (int i = 1; i <=num; i++)
{
    fact=fact*i;
    
}
return fact;


}

int ncr(int n,int r){
    int nume = factoril(n);
    int demo = factoril(r)*factoril(n-r);

    int ans = nume/demo;

    return ans;



}


int main(){
    int n,r;
    cin>>n>>r;

    ncr(n,r);
    cout<<ncr(n,r)<<endl;

}