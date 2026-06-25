#include<iostream>
using namespace std;
int sum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
bool ispossible(int arr[],int n,int m,int mid){
    int sum=0;
    int student=1;
    for(int i=0;i<n;i++){
        if(sum+arr[i]<=mid){
            sum+=arr[i];
        }
        else{
            student++;
            if(student>m||arr[i]>mid){
                return false;
            }
            sum=arr[i];

        }
        
    }
    return true;
}
int main(){
    int s=0;
    int arr[4]={10,20,30,40};
    int e= sum(arr,4);
    int m=s+(e-s)/2;
    int pgsum=0;
    int ans=-1;
    while(s<=e){
        if(ispossible(arr,4,2,m)){
            ans=m;
            e=m-1;
        }
        else{
            s=m+1;
        }
        m=s+(e-s)/2;
    }
    cout<<"no of pages to be allocated to student is "<<ans;
    
    }