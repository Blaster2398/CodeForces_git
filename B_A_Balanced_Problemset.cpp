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
    int n,x;
    cin>>x>>n;
    int sol =1;
    for(int i=1;i<=sqrt(x);i++){
        if(x%i==0){
            // now we have to chheck id we can create enough number of questions either n<=i or n<=x/i
            if(n<=i){
                //we have i problems with x/i difficulty 
                int diff =x/i;
                sol = max(sol,diff);
            }
            if(n<= x/i){
                // we have x/i problems with i difficulty 
                int diff = i;
                sol = max(sol,diff);
            }

        }

        
    }
    cout<<sol<<endl;
    }
    return 0;
}