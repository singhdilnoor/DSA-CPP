#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the term of AP series: ";
    cin>>n;
    int a=7,d=3;
    int term=a+(n-1)*d;
    cout<<"The "<<n<<"th term of the AP series is: "<<term;
    return 0;

}