/*
    Returns prime factorization of a number in form of vector where each element is of form (p, e) such that prime factorization of n contains p^e
    T(n) = O(sqrt(n))
    S(n) = O(log(n))
    Written On: 18-01-23
*/
#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int> > prime_factorization(int n){
    vector<pair<int, int> > pf;
    if (n < 2){
        return pf;
    }
    for (int i = 2; i*i <= n; i++){
        int p = 0;
        while(n % i == 0 && n > 1){
            p++;
            n /= i;
        }
        if (p){
            pf.push_back(make_pair(i, p));
        }
    }
    if (n > 1){
        pf.push_back(make_pair(n, 1));
    }
    return pf;
}
