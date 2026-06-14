#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    int c=a;
    int d=b;
    int count1=0;
    int count2=0;
    while(a){
        if(a&1)
            count1++;
        a=a>>1;
    }
    while(b){
        if(b&1)
            count2++;
        b=b>>1;
    }
    cout<<"Number of set bits in "<<c<<" is "<<count1<<endl;
    cout<<"Number of set bits in "<<d<<" is "<<count2<<endl;
    cout<<"Total number of set bits in "<<c<<" and "<<d<<" is "<<count1+count2<<endl;
    return 0;
}