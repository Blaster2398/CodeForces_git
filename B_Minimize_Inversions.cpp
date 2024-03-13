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
    vector<pair<int,int>> num1;
    vector<pair<int,int>> num2;
    map<int,int> all;

    int n;
    cin>>n;

    int up[n];
    int down[n];
    inp(up,n);
    inp(down,n);

    for(int i=0; i<n; i++){
        num1.push_back(make_pair(up[i]+down[i],up[i]));
        all[up[i]]=down[i];
    }

    sort(num1.begin(),num1.end());
    // sort(num2.begin(),num2.end());

    for(int i=0; i<n; i++){
        cout<<num1[i].second<<' ';
    }
    cout<<endl;

    for(int i=0; i<n; i++){
        cout<<all[num1[i].second]<<" ";
    }
    cout<<endl;
    }
    return 0;
}