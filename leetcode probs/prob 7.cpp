#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter number to reverse: ";
    cin>>n;
    int y=0;
    while(n!=0){
        int digit=n%10;
        
        if((y<INT_MIN/10)||(y>INT_MAX/10)){
            cout << "Overflow detected!" << endl;
            y = 0;
            break;
        }
           
        
        y = y * 10 + digit;
        n = n / 10;
    }
    
    cout<<y;

}