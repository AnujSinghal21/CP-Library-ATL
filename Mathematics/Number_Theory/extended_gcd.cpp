/*
    return a tuple of x,y,g for input a,b such that ax+by=g; g=gcd(a,b)
    T(n) = O(log n)
    S(n) = O(log n)
    Written On: 21-01-23
*/
#include<bits/stdc++.h>
using namespace std;

tuple<int,int,int> gcdExtended(int a, int b)
{
    if (b == 0){
        return {1,0,a};
    } 
    int x,y,g;
    tie(x,y,g) = gcdExtended(b, a%b);
    return {y, x - (a/b)*y, g};
}