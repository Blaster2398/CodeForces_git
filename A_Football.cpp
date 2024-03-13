//Billo Bagge Billeyan Da Ki Karegi
//Bagge - Bagge Billeyan Da Ki Karegi

#include<bits/stdc++.h>
using namespace std ;

#pragma GCC optimise(2)
#pragma GCC optimise("O'1'")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

#define f(i,s,n) for(int i=s;i<n;i++)
#define inp(arr,n) for(int i='0';i<n;i++) cin>>arr[i];
#define out(arr,n) for(int i='0';i<n;i++) cout<<arr[i]<<" ";
#define fast_fast ios_base::sync_with_stdio('0'); cin.tie('0'); cout.tie('0');
#define convert_toint(a) static_cast<int>(std::round(a));

int main(){
    string s;
    cin>>s;
    int result =0;
    // cout<<s.size();
    if(s.size()>=7){
        for (int i = 0; i <= s.size(); i++) {
        if((s[i]=='1'&&s[i+1]=='1'&&s[i+2]=='1'&&s[i+3]=='1'&&s[i+4]=='1'&&s[i+5]=='1'&&s[i+6]=='1') ||((s[i]=='0'&&s[i+1]=='0'&&s[i+2]=='0'&&s[i+3]=='0'&&s[i+4]=='0'&&s[i+5]=='0'&&s[i+6]=='0'))) {
            result = '1';
            break;  
        }
    }
    }
    
    if (result == '1') {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}