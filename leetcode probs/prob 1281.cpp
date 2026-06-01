#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
   int prod=1;
    int sum=0;
    while(n!=0){
        int newnum=n%10;
        prod=newnum*prod;
        sum=sum+newnum;
        n=n/10;
    }
    cout<<(prod-sum);
    

}