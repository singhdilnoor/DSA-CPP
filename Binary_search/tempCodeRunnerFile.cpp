#include <iostream>
using namespace std;

int binarysearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid = start + (end - start) / 2;
        if(arr[mid]==key){
            return mid;}
        else if(key>arr[mid]){
            start=mid+1;
        }
        else if (key<arr[mid]){
            end=mid-1;
        }
    }
    return -1;
}
int main(){
    cout<<"hi";
    int even[6]={1,3,4,5,6,7};
    int odd[5]={2,3,5,6,8};
int e =binarysearch(even,6,5);
    int o = binarysearch(odd,5,3);
    cout<< "even is" <<e<<endl;
    cout<<"odd is " <<o<< endl;
    return 0;
}