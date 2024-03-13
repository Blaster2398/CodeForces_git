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
    int n;
    cin>>n;
    map<int ,int> arr;
    int x;
    // this wil create a map with the freq of the given elements in ascending order 
    for(int i=0; i<n; i++){
        cin>>x;
        arr[x]++;
    }

    auto it = arr.begin();
    int last  = it->first;
    int sol = it->second;
    int lastCount = it->second;
    it++;                         // this is important as we have already calculated for the first element 

    for(;it != arr.end(); it++){
        // if there is a break then we will add the freq of the new doll in the solution 
        if(it->first != (last+1)){
            sol += it->second;
        }
        // if no break and the freq is more than the prev then add the differnce or is it is less then it will be negative then add 0
        else{
            sol += max(0 , it->second-lastCount);
        }
        last = it->first;
        lastCount = it->second;
    }

    cout<<sol<<endl;

    }
    return 0;
}