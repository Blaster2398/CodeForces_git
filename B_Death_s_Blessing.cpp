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
#define convert_toint(a) static_cast<ll>(std::round(a));

typedef long long int  ll;

int main(){
    fast_fast
    ll t;
    cin>> t;
    while(t--){
        ll n;
        cin>>n;
        vector<pair<ll,ll>> arr;
        ll health[n];
        ll spell[n];

        f(i,0,n){
            cin>>health[i];
        }
        
        f(i,0,n){
            cin>>spell[i];
        }
        
        f(i,0,n){
            arr.push_back(make_pair(health[i],spell[i]));
            // or use
            //arr.emplace_back(health[i],spell[i]);
        }


        auto max_e =max_element(spell,spell+n);
        
        

        ll sum_health=0;
        ll sum_spell=0;

        // cout<<"done2"<<endl;
        // cout<<*max_e<<endl;
        f(i,0,n){
            sum_health+=arr[i].first;
        }
        f(i,0,n){
            sum_spell+=arr[i].second;
        }

        sum_spell-=*max_e;
        
        

        ll res=sum_health+sum_spell;

        cout<<res<<endl;


    }
    return 0;
}