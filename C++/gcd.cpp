// 12) Program to find GCD of two numbers
#include<bits/stdc++.h>
using namespace std;

int main(){
    int num1, num2;
    cin>>num1>>num2;

    int m = min(num1, num2), gcd;
    for(int i = m; i >= 1; i--){
        if(num1 % i == 0 && num2 % i == 0){
            gcd = i;
            break;
        }
    }
    cout<<"Greatest common divisor: "<<gcd;
    return 0;
}