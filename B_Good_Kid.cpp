#include<bits/stdc++.h>
using namespace std ;

int product(int arr[],int j, int n){
    int res=1;
    arr[j]+=1;
    for(int i=0; i<n; i++){
        res*=arr[i];
    }
    arr[j]-=1;
    return res;
}

int main(){
  int t;
  cin>> t;
  while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> res;
    for(int i=0;i<n; i++){
        
        int pro=product(arr,i,n);
        res.push_back(pro);
        // cout<<pro<<endl;
    }

    auto max_pro = max_element(res.begin(),res.end());
    cout<<*max_pro<<endl;



  }
  return 0;
}