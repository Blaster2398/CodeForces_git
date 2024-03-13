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
        string str;
        cin>>str;
        
        int s;
        s=str.size();
        

        //check if there is any question mark in the string
        int check_q=0;
        f(i,0,s){
            if(str[i]=='?'){
                check_q=1;
            }
        }


        if(check_q==1){
            if(str[0]=='?'){
                str[0]='0';
            }
            if(str[s-1]=='?'){
                str[s-1]='1';
            }

            f(i,1,s){
                if(str[i]=='?'){
                    str[i]=str[i-1];
                }
            }
        }
        
        cout<<str<<endl;
        
    }
    return 0;
}