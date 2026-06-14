#include<iostream>
using namespace std;
// Compute the nth Fibonacci number (1-based): fibonacci(1)=0, fibonacci(2)=1
int fibonacci(int n){
    if(n <= 1) return 0;
    if(n == 2) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << '\n';
    return 0;
}