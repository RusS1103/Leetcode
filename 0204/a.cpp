class Solution {
    const int ZERO = [](){
        ios_base::sync_with_stdio;
        cin.tie(NULL);
        return 0;
    }();
    
public:
    int countPrimes(long long n) {
    vector<bool> primes(n + 1, true);
    primes[0] = false;
    primes[1] = false;
    for (size_t i = 2; i <= n; ++i) {
        if (primes[i]) {
            
                for (size_t j = i * i; j <= n; j += i) {
                    primes[j] = false;
                
            }
        }
    }
    int count = 0;
    
    for (auto now : primes) {
        if (now) {
            ++count;
        }
    }
    if (primes.back()) {
        return count - 1;
    }
    return count;
}
};
