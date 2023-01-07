#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*

// We can also use a single statement "using namespace std," but this is more efficient.
using std::cin;
using std::cout;
using std::vector;
using std::sqrt;


*/

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}

ll lcm1(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

ll lcm(ll a,ll b){
    ll g=__gcd(a,b);
    return (a*b/g);
}