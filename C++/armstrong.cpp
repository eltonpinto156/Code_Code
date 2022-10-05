#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;

    int count = 0, numcopy = num, sum = 0, rem;
    while(numcopy != 0){
        numcopy = numcopy /10;
        count++;
    }
    numcopy = num;
    while(numcopy != 0){
        rem = numcopy % 10;
        sum = sum + pow(rem, count);
        numcopy = numcopy / 10;
    }
    if(sum == num){
        cout<<"Number is Armstrong.";
    }
    else{
        cout<<"Number is not Armstrong.";
    }
    return 0;
}