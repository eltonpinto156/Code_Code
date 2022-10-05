//11) Program to find sum of first n natural numbers
#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;

    int sum = num * (num + 1)/2;   //sum of n natural number maths formula.
    cout<<"Sum of first "<<num<<" natural numbers: "<<sum<<endl;
    return 0;
}