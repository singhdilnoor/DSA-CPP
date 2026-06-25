#include<iostream>
using namespace std;
int findMax(int arr[], int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]-arr[j]>max||arr[j]-arr[i]>max){
                max=arr[i]-arr[j]>arr[j]-arr[i]?arr[i]-arr[j]:arr[j]-arr[i];
            }
        }
    }
    return max;
}
int main(){
    int arr[5]={4,2,1,3,6};
    int max=INT_MIN;
    max=findMax(arr,5);
    cout<<"Maximum difference is "<<max;
}