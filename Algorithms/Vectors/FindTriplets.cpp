#include <bits/stdc++.h>
using namespace std;



 
 bool findTriplets(int arr[], int n)
    { 
        sort(arr, arr+n); 
       for(int i = n-1; i >= 2; i--)
       {
           int tmp = arr[i];
           int l = 0, r = i-1;
           while(l < r)
           {
               if(arr[l] + arr[r] + tmp == 0)
                   return true;
               else if(arr[l]+arr[r]+tmp > 0)
                   r--;
               else
                   l++;
           }
       }
       return false;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(findTriplets(arr,n)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;

}
