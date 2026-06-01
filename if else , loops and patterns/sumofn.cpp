#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter the value of n: ";
    cin>>n;
    i=0;
    int sum=0;
    while(i<=n){
        sum=sum+i;
        i++;
    }
    cout<<"The sum of first "<<n<<" natural numbers is "<<sum;
    return 0;
}