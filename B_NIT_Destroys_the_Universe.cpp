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
    f(i,0,n){
        cin>>arr[i];
    }
    int res ;

    //the logic 
    // if there are all zeroes then return 0
    int count=0;
    f(i,0,n){
        if(arr[i]==0){
            count++;
        }
    }
    if(count==n){
        res=0;
    }
    // if all the non zero elements are continuos then return 1
    else{
        int count_1=0;
        f(i,0,n){
            if(arr[i]!=0){
                f(j,i,n){
                    if(arr[j]==0 || j==n-1 ){
                        count_1++;
                        i=j;
                        break;
                    }
                }

            }
        }
        if(count_1==1){
            res=1;
        }
        else{
            res=2;
        }
    }
    // if not then return 2 ( how is that is take all the elemnts including zeros and make them any number that is not present there and then make the whole list as zero 
    

    cout<<res<<endl;

    }
    return 0;
}