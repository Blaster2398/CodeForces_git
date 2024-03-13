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
    string inp;
    cin>>inp;
    string res= "";

    int len=inp.size();
    // Convert the string to lowercase

    for (char &c : inp) {
        c = tolower(c);
    }

    
    for(char i:inp){ 
        if(i!='a' && i!='e' && i!='i' && i!='o' && i!='u' &&i!='y' ){
            res+='.';
            res+=i;
        }
    }
    

    cout<<res<<endl;
    return 0;
}