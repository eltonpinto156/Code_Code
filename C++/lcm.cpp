// 13) Program to find LCM of two numbers
#include<bits/stdc++.h>
using namespace std;

int main(){
    int num1, num2;
    cin>>num1>>num2;

    int m = min(num1, num2), gcd, lcm;
    for(int i = m; i >= 1; i--){
        if(num1 % i == 0 && num2 % i == 0){
            gcd = i;
            break;
        }
    }
    lcm = num1 * num2 / gcd;

    cout<<"LCM of two numbers is: "<<lcm;
    return 0;
}