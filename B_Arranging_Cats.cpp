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
    // vector<int> given;
    // vector<int> desired;
    int n;
    cin>>n;
    string given ;
    string desired;
    cin>>given>>desired;

    int ones=0;
    int zeros=0;

    for(int i = 0;i < n; i++){
        if(given[i] != desired[i]){
            if(desired[i]=='0'){
                zeros++;
            }
            else{
                ones++;
            }
        }
    }
    cout<<max(zeros,ones)<<endl;
    
}
return 0;
}