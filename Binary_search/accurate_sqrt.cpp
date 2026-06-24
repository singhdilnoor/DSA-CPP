#include<iostream>
using namespace std;
long long int sqrt(int x){
    int s=0;
    int e=x;
    int ans=-1;
    long long int m=s+(e-s)/2;
    while(s<=e){
       long long int sq=m*m;
       if (sq==x){
        return m;
       }
       else if(sq<x){
        ans = m;
        s=m+1;
    }
    else{
        e=m-1;
    }
    m=s+(e-s)/2;
    
    }
    return ans;
}
double moreprecise(int x,int f,int ans){
    double finalsol=ans;
    double l=1;
    for(int i=0;i<f;i++){
        l=l/10;
        for(double j=ans;j*j<x;j=j+l){
            finalsol=j;
        }

    }
    return finalsol;
}
int main(){
    int n;
    cout<<"enter num: "<<endl;
    cin>>n;
    int sol=sqrt(n);
    double finalsol=moreprecise(n,3,sol);
    cout<<sol<<endl;
    cout<<finalsol<<endl;
}