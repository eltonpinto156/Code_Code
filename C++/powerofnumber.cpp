//16) Program to calculate the power of a number
#include<bits/stdc++.h>
using namespace std;

int main(){
    int base, exponent;
    cout<<"Enter base: ";
    cin>>base;
    cout<<"\nEnter exponent: ";
    cin>>exponent;

    int answer = pow(base, exponent);   //in math.h header file there is pow(arg1, arg2) function it return the arg1 raised to the power arg2.
    cout<<"Power of the number is: "<<answer;
    return 0;
}