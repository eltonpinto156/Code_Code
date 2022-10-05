// 8) Program to check if given number is palindrome or not
#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;

    int reverse = 0, numcopy = num;
    while(numcopy != 0){
        reverse = reverse * 10 + numcopy % 10;
        numcopy = numcopy / 10;
    }
    if(reverse == num){
        cout<<"Number is Palindrome."<<endl;
    }
    else{
        cout<<"Number is NOT Palindrome."<<endl;
    }
    return 0;
}