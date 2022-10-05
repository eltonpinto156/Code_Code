//Hacktoberfest 2022
/* 
Time complexity -> O(n)
Space complexity -> O(1)
*/

#include <iostream>
using namespace std;
bool isPrime(int n){
    if(n==0 || n==1){
        return false;
    }
    for(int i=2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout << "Enter a Number -> ";
    cin >> n;
    if(isPrime(n)){
        cout << "It is Prime Number...." << endl;
    }
    else{
        cout << "It is not Prime Number...." << endl;
    }
    return 0;
}

#include
//Contributed by Ujjwal Gulhane.
