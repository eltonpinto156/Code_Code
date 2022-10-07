#include<bits/stdc++.h>
using namespace std;

bool checkprime(int number){
    if(number == 1){
        return false;
    }
    for(int i = 2; i <= number / 2; i++){
        if( number % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int num;
    cin>>num;
    for(int i = 1; i <= num; i++){
        if(checkprime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}