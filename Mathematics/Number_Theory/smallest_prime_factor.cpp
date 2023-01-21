/*
    returns the smallest prime factor in prime factorisation of all the numbers in range 0 to n
    Can be used as pre-processing for computing prime factorisation of any number in O(log n)
    T(n) = O(n log log n)
    S(n) = O(n)
    Written On: 21-01-23
*/
#include<bits/stdc++.h>
using namespace std;

void smallest_prime_factor(int n, vector<int> &spf){
    for (int i = 0; i <= n; i++){
        spf[i] = 0;
    }
    spf[1] = 1;
    for (int i = 2;i <= n; i++){
        if (spf[i]) continue;
        for (int j = i; j <= n; j+=i){
            if (!spf[j]){
                spf[j] = i;
            }
        }
    }
    return;
}