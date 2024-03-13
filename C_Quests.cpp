//Billo Bagge Billeyan Da Ki Karegi
//Bagge - Bagge Billeyan Da Ki Karegi

#include<bits/stdc++.h>
using namespace std ;

#pragma GCC optimise(2)
#pragma GCC optimise("O1")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

typedef long long int INT;
#define f(i,s,n) for(INT i=s;i<n;i++)
#define inp(arr,n) for(INT i=0;i<n;i++) cin>>arr[i];
#define out(arr,n) for(INT i=0;i<n;i++) cout<<arr[i]<<" ";
#define fast_fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define convert_toint(a) static_cast<int>(std::round(a));


int main(){
    fast_fast
    INT t;
    cin>> t;
    while(t--){
        INT n,k;
        cin>>n>>k;
        INT arr1[n], arr2[n];
        inp(arr1,n);inp(arr2,n);

        INT mini= min(n,k);
        vector<INT> v;
        INT pre_sum=arr1[0];

        for(INT i=0; i<mini;i++){
            INT sum =pre_sum;
            auto maxb =max_element(arr2,arr2+i+1);
            pre_sum+=arr1[i+1];

            INT temp_res=sum+(*maxb)*(k-i-1);
            v.push_back(temp_res);
        }

    auto res =max_element(v.begin(),v.end());
    cout<<*res<<endl;
    }
    return 0;
}