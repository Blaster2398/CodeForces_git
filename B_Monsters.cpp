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
    int t;
    cin>> t;
    while(t--){
    
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> m(n);
    f(i,0,n){
        int z;
        cin>>z;
        if(z%k!=0){
            m[i].first=z%k;
        }
        else{
            m[i].first=k;
        }    
        m[i].second=i+1;
    }

    for(int p=k;p>0;p--){
        f(i,0,n){
            if(m[i].first==p){
                cout<<m[i].second<<" ";
            }
        }
    }
    cout<<endl;
    }
    return 0;
}