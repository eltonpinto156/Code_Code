// 15) Program to count number of digits in an integer
#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;

    int count = 0;
    while(num != 0){
        num = num/10;
        count++;
    }

    cout<<"Number of digits in entered number is: "<<count<<endl;
    return 0;
}