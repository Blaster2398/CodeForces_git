#include<bits/stdc++.h>
using namespace std ;

int main(){
  int t;
  cin>> t;
  while(t--){
    int n,k,x;
    cin>>n>>k>>x;
    int sum=0;

    
    if(k<=n && x>=k-1){
        if(k==x){
        x=x-1;
        }
        
        for(int i=0;i<k;i++){
            sum+=i;
        }
        for(int i=0; i<n-k;i++){
            sum+=x;
        }


    }


    else{
        sum=-1;
    }

    cout<<sum<<endl;
  }
  return 0;
}