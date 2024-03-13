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
#define out(arr,n) for(int i=0;i<n;i++) cout<<arr[i];
#define fast_fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define convert_toint(a) static_cast<int>(std::round(a));

int main(){
    fast_fast
    string inp;
    cin>>inp;
    int len =inp.size();
    vector<char> arr;


    f(i,0,len){
        if(i%2==0){
            arr.push_back(inp[i]);
        }

    }

    sort(arr.begin(),arr.end());

    vector<char>res;
    
    f(i,0,arr.size()){
        res.push_back(arr[i]);
        res.push_back('+');

    }

    res.pop_back();

    out(res,res.size());
    return 0;
}