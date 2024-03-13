#include<bits/stdc++.h>
using namespace std ;

int main(){
  int t;
  cin>> t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    int b[n];

    vector<int> index;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        if(a[i]>10){
            index.push_back(i);
        }
    }
    for(int i:index){
        a[i]=-1;
        b[i]=-1;
    }

    auto max_b = max_element(b,b+n);
    int winner=0;
    for(int i=0;i<n;i++){
        if(b[i]==*max_b){
            winner=i+1;
        }
    }

    cout<<winner<<endl;
  }
  return 0;
}