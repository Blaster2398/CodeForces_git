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
    int arr[n];
    inp(arr,n);
    int c=0;
    int last=arr[0];
    string res="1";
    f(i,1,n){
        // for the first part 
        if(c==0 && last<=arr[i] && arr[i]>=arr[0]){
            res+="1";
            last=arr[i];
        }
        //for the transition 
        else if(c==0 && last>arr[i] && arr[i]<=arr[0]){
            res+="1";
            last=arr[i];
            c=1;
        }
        //check for 2nd part make it ascending( update last only when its in order)
        else if(c==1 && last<=arr[i] && arr[i]<=arr[0]){
            res+="1";
            last=arr[i];
        }

        else{
            res+="0";
        }

    }
    cout<<res<<endl;
    }
    return 0;
}