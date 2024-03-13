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
    int m,n;
    cin>>m>>n;
    int arr[m*n];
    f(i,0,m*n){
        cin>>arr[i];
    }
    sort(arr,arr+m*n);

    // now the largerst element will be arr[m*n-1] and the smallest element will be a[0]

    // put the larget element in (0,0) then find which is small m or n then put the smallest element in (0,1) or (1,0) accordingly to get the max diff for most of the cases 
    // and for the row or column left use max_ele-second_smallest   or second_max_ele- smallest_ele

    int max_1=arr[n*m-1]-arr[0];
    int max_2=max(arr[n*m-1]-arr[1],arr[n*m-2]-arr[0]);
    cout<<(n*m-min(n,m))*max_1+(min(n,m)-1)*max_2<<endl;    
    }
    return 0;
}