//Billo Bagge Billeyan Da Ki Karegi
//Bagge - Bagge Billeyan Da Ki Karegi

#include<bits/stdc++.h>
using namespace std ;

#pragma GCC optimise(2)
#pragma GCC optimise("O1")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

typedef long long int ll;
#define f(i,s,n) for(int i=s;i<n;i++)
#define inp(arr,n) for(int i=0;i<n;i++) cin>>arr[i];
#define out(arr,n) for(int i=0;i<n;i++) cout<<arr[i]<<" ";
#define fast_fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define convert_toint(a) static_cast<int>(std::round(a));

int main(){
    fast_fast
    int t;
    cin>> t;
    while(t--){
    ll a,b,r;
    cin>>a>>b>>r;
    ll mini = LLONG_MAX;
    for(ll i =0;i<=r;i++){
        ll res = abs((a^b)^i);
        mini =min(mini,res);
    }

    cout<<mini<<endl;
    }
    return 0;
}