/*
    Returns true if input n is prime, false otherwise
    T(n) = O(sqrt(n))
    S(n) = O(1)
    Written On: 18-01-23
*/
bool is_prime(int n){
    if (n < 2) {
        return false;
    }
    for (int i = 2; i*i <= n; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}
