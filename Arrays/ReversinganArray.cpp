#include<iostream>
using namespace std;
int reverse(int array[],int n){
     for (int i=0;i<n/2;i++){
        int temp=array[i];
        array[i]=array[n-i-1];
        array[n-i-1]=temp;
     }
     return 0;
}
int main(){
    int arr[5];
    cout<<"Enter 5 elements of array: ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    reverse(arr,5);
    cout<<"Reversed array:";
    for(int j=0;j<5;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}