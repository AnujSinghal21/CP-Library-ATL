/*
    returns whether x is prime for all x in 0 to n-1
    T(n) = O(n log log n)
    S(n) = O(n)
    Written On: 18-01-23
*/
#include<bits/stdc++.h>
using namespace std;

vector<bool> sieve_of_eratosthenes(int n){
    vector<bool> sieve(n+1, true);
    sieve[1] = false;
    for (int i = 2;i <= n; i++){
        if (!sieve[i]) continue;
        for (int j = 2*i; j <= n; j+=i){
            sieve[j] = false;
        }
    }
    return sieve;
}