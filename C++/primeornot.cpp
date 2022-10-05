// 14) Program to check whether number is prime or not
#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;

    int flag = 1;
    for(int i = 2; i <= num/2; i++){
        if(num % i == 0){
            flag = 0;
            break;
        }
    }

    if(flag == 1){
        cout<<num<<" is Prime."<<endl;
    }
    else{
        cout<<num<<" is not Prime."<<endl;
    }
    return 0;
}