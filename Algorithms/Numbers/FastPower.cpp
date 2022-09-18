#include <bits/stdc++.h>
using namespace std;

//O(log power) or O(log N)
#define MOD 1000000007

long long fast_power(long long base, long long power) {
    long long result = 1;
    while(power > 0) {

        if(power % 2 == 1) { // Can also use (power & 1) to make code even faster
            result = (result*base) % MOD;
        }
        base = (base * base) % MOD;
        power = power / 2; // Can also use power >>= 1; to make code even faster
    }
    return result;
}

int main(){
    long long base,power;
    cin>>base>>power;
    cout<<fast_power(base,power);
    return 0;
}