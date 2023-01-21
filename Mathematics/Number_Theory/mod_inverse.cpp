/*
    given x, p (prime), returns  x^-1 mod p
    based on extended Euclidean gcd algorithm
    T(n) = O(log n)
    S(n) = O(log n)
    Written On: 21-01-23
*/
#include<bits/stdc++.h>
using namespace std;

tuple<int,int,int> gcdExtended(int a, int b){
    if (b == 0){
        return {1,0,a};
    } 
    int x,y,g;
    tie(x,y,g) = gcdExtended(b, a%b);
    return {y, x - (a/b)*y, g};
}
int mod_inverse(int x, int p){
    int a,b,c;
    tie(a,b,c) = gcdExtended(x, p);
    if (a < 0){
        a += p;
    }
    return a;
}