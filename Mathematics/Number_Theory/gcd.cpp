/*
    Returns the gcd of 2 numbers
    T(n) = O(log(n))
    S(n) = O(1)
    Written On: 18-01-23
*/
#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    int t;
    if (a < b){
        t = a;
        a = b;
        b = t;
    }
    while (b != 0){
        t = b;
        b = a % b;
        a = t;
    }
    return a;
}