#include<iostream>
using namespace std;
void swap(int arr[],int n){
    for(int i = 0 ; i<n ; i+=2){
        if(i+1 < n){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
}
void printArray(int arr[],int n){
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int even[] = {1,2,3,4,5,6};
    int odd[] = {1,2,3,4,5};
    int n1 = sizeof(even)/sizeof(even[0]);
    int n2 = sizeof(odd)/sizeof(odd[0]);

    swap(even,n1);
    swap(odd,n2);

    printArray(even,n1);
    cout<<endl;
    printArray(odd,n2);

    return 0;
}
