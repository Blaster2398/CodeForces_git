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
    int n,m;
    cin>>n>>m;
    int arrn[n];
    int arrm[m];
    inp(arrn,n);
    inp(arrm,m);
    int mid = n/2;
    sort(arrn,arrn+n);
    sort(arrm,arrm+m);
    reverse(arrm,arrm+m);
    
    int sum=0;
    cout<<"mid="<<mid<<endl;
    for(int i =0;i< n/2;i++){
        sum+=abs(arrm[i]-arrn[i]);
    }        
        
    if(( i == mid) && (n%2!=0)){
         sum+=max(abs(arrn[i]-arrm[i]),abs(arrn[i]-arrm[m-1-i]));
    }
    for(int i=mid/2; i<n; i++){
        sort(arrm, arrm + m, greater<int>());
        sum+=abs(arrn[i]-arrm[n-i-1]);
        }
        cout<<"sum="<<sum<<endl;
    cout<<sum<<endl;
    }
    return 0;
}
    