//Hacktoberfest 2022
/* 
Time complexity -> O(n * log (log n))
Space complexity -> O(n)
*/
class Solution {
public:
    int countPrimes(int n) {
        /* intialize vector all numbers are intially prime
        traverse number from 2 to n - 1 if prime then count++
        */
        vector<bool> prime(n+1, true);
        int count = 0;
        prime[0] = prime[1] = false;
        for(int i = 2; i < n; i++){
            if(prime[i]){
                count++;
            }
            for(int j = i*2; j < n; j = j + i){
                prime[j] = false;
            }
        }
        return count;
    }
};
//Contributed by Ujjwal Gulhane.
