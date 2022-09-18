#include <bits/stdc++.h>
using namespace std;

template <typename T>
bool isPalindrome(vector<T> num){
    vector<T> rev=num;

    reverse(rev.begin(), rev.end());    

    if(rev==num)
    return true;
    else
    return false;
}

int main(){
    vector<int> num={1,2,3,4,5,4,3,2,1};
    cout<<isPalindrome(num);
    

    return 0;
}