//Billo Bagge Billeyan Da Ki Karegi
//Bagge - Bagge Billeyan Da Ki Karegi

#include<bits/stdc++.h>
using namespace std ;

#pragma GCC optimise(2)
#pragma GCC optimise("O1")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

#define f(i,s,n) for(int i=s;i<n;i++)
#define inp(arr,n) for(int i=0;i<n;i++) cin>>arr[i];
#define out(arr,n) for(int i=0;i<n;i++) cout<<arr[i]<<" ";
#define fast_fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define convert_toint(a) static_cast<int>(std::round(a));

int main(){
    fast_fast
    int n;
    double l;
    cin>>n>>l;

    double arr[n];
    inp(arr,n);
    
    sort(arr,arr+n);
    
    double diff[n+1];
    diff[0] = arr[0]-0;
    diff[n] = l-arr[n-1];

    for(int i =1;i<n;i++)
    {
        diff[i] = (arr[i]-arr[i-1])/2;
    }
    sort(diff,diff+n+1);

    cout<<setprecision(9)<<diff[n]<<endl;
    return 0;
}