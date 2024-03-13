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

bool checkALL(vector<int> &arr){
    bool check =true;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=-1){
            check=false;
        }
    }
    return check;
}

int main(){
    fast_fast
    int t;
    cin>> t;
    while(t--){
    int n;
    cin>>n;
    int p=n;
    vector<int> arr;
    while(p--){
        int inp;
        cin>>inp;
        arr.push_back(inp);
    }
    int count =0;
    sort(arr.begin(),arr.end());

    for(int i=0;i<n;i++){
        if(checkALL(arr)){
            break;
        }
        vector<int>test;
        
        for(int j=0; j<arr.size();j++){
            if(test.size()==0 && arr[j]!=-1){
                test.push_back(arr[j]);
                arr[j]=-1;
            }
            if(test.size()!=0 && arr[j]==test.back()+1){
                test.push_back(arr[j]);
                arr[j]=-1;
            }

        }
        count++;
    }
    cout<<count<<endl;

    }
    return 0;
}