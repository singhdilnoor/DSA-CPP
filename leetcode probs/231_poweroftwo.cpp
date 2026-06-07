#include<iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    int ans = 1;
    for(int i = 0; i <= 30; i++) {
        if(n == ans) return true;
        if(ans < INT_MAX/2)
            ans = ans * 2;
    }
    return false;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    if(isPowerOfTwo(n))
        cout << n << " is a power of two" << endl;
    else
        cout << n << " is not a power of two" << endl;
    
    return 0;
}