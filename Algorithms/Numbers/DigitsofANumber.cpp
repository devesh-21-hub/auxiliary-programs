#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<ll> digits(ll n){
    vector<ll> digitString;
    
    while(n!=0){
        
    digitString.push_back(n%10);

    n/=10;

    }

    reverse(digitString.begin(), digitString.end());

    return digitString;   
    
}

int main(){
    ll n;
    cin>>n;
    vector<ll> digitString=digits(n);
    for(ll i=0;i<digitString.size();i++){
        cout<<digitString[i]<<" ";
    }
    return 0;
}