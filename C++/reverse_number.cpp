// 2) Reverse an input number using recursion.
#include<bits/stdc++.h>
using namespace std;

void reverseofnum(int number){
    if(number < 10){
        cout<<number;
        return;
    }
    else{
        cout<<number%10;
        number = number/10;
        reverseofnum(number);
    }
}

int main(){
    int number;
    cin>>number;

    cout<<"Reverse of Entered Number: ";
    reverseofnum(number);
    return 0;
}