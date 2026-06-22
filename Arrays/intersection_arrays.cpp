#include<iostream>
using namespace std;
void intersection2(int a1[],int a2[],int size1,int size2){
    int i=0,j=0;
    while(i<size1 && j<size2){
        if (a1[i]==a2[j]){
            cout<<a1[i]<<' ';
            i++;
            j++;
        } else if (a1[i] < a2[j]) {
            i++;
        } else {
            j++;
        }
    } 
}//method 1


void intersection1(int a1[],int a2[],int size1,int size2){
    int n=0;
    for(int i=0;i<size1;i++){
        for(int j=n;j<size2;j++){
            if (a1[i]==a2[j]){
                cout<<a1[i]<<" ";
            n=i+1;
            break;
        }
    }
}//method2
}
int main(){
    int arr[4]={1,2,2,3};
    int array[5]={0,2,3,4,3};
    intersection1(arr,array,4,5);
}