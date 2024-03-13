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

typedef long long int ll;

int main(){
    fast_fast
    int t;
    cin>> t;
    while(t--){
        long long  int x,y,k;
        cin>>x>>y>>k;

        // // i need to y sticks to make 1 coal and i need to make k coals so k trades are already fixed and the one trade of sticks
        // // that i have to make in the initial of every trade 
        // long int trade =k+1;
        // long int sticks_req=k+(k*y);
        // long int st =x ; // to store the initial value of the sticks 
        // // k sticks are required to make k torch and ky sticks are required to make k coal
        // long int count=0;
        // while(x<sticks_req){
        //     count++;
        //     x=x-1+st;
        // }
        

        
        long long int trades_needed = (k * y + k - 1) / (x - 1) + k; 
        cout<<trades_needed<<endl;
    }
    return 0;
}