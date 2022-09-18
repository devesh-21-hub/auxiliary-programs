#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll digitSum(ll n){
    if(n==0)
        return 0;

    return digitSum(n/10)+n%10;
}

int main(){
    ll n;
    cin>>n;
    cout<<digitSum(n);
    return 0;
}