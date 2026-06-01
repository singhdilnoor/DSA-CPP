#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        int x=i;
        for(int j=1; j<=n; j++){
            cout<<char(x+64)<<" ";
            x++;
        }
        cout<<endl;
    }
}