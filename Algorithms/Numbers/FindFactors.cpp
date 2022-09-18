#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

//O(sqrt(N))
vector <ll> findFactors(ll x) {
    // We will store all factors in `result`
    vector <ll> result;
    ll i = 1;
    // This will loop from 1 to int(sqrt(x))
    while(i*i <= x) {
        // Check if i divides x without leaving a remainder
        if(x % i == 0) {
            result.push_back(i);
            // Handle the case explained in the 4th
            if(x/i != i) {
                result.push_back(x/i);
            }
        }
        i++;
    }
    return result;
}

int main(){
    ll x;
    cin>>x;
    vector <ll> factors=findFactors(x);
    for(ll i=0;i<factors.size();i++){
        cout<<factors[i]<<" ";
    }
    return 0;
}