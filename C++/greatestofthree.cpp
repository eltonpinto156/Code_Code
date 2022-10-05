// 3) Program to find greatest of three number.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int num1, num2, num3;

    cin>>num1>>num2>>num3;

    int temp = (num1 > num2)? num1 : num2; 
    temp = (temp > num3)? temp : num3;
    cout<<"Greatest of three number: "<<temp;
    return 0;
}