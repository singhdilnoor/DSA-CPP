#include<iostream>
using namespace std;
int main(){
    int amount;
    cout<<"Enter the amount: ";
    cin>>amount;
    int notes_2000 = amount/2000;
    amount %= 2000;
    int notes_500 = amount/500;
    amount %= 500;
    int notes_100 = amount/100;
    amount %= 100;
    int notes_50 = amount/50;
    amount %= 50;
    int notes_10 = amount/10;
    amount %= 10;
    int notes_1 = amount/1;
    cout<<"Number of 2000 rupee notes: "<<notes_2000<<endl;
    cout<<"Number of 500 rupee notes: "<<notes_500<<endl;
    cout<<"Number of 100 rupee notes: "<<notes_100<<endl;
    cout<<"Number of 50 rupee notes: "<<notes_50<<endl;
    cout<<"Number of 10 rupee notes: "<<notes_10<<endl;
    cout<<"Number of 1 rupee notes: "<<notes_1<<endl;
    return 0;
}