#include<bits/stdc++.h>
using namespace std ;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin>> t;
  while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    set<int> mySet;
    for(int i:arr){
      mySet.insert(i);
    }
    int res=0;


    // cout<<"the size of my set ".<<mySet.size()<<endl;
    if(mySet.size()==1){
      res=1;
    }


    else if(mySet.size()==2){
      // int ele[2];
      // int j=0;
      // for(int i:mySet){
      //   arr[j]=i;
      //   j++;
      // }

      // for(int i=0;i<2;i++){
      //   cout<<ele[i]<<endl;
      // }


      sort(arr,arr+n);
      int ele1=arr[0];
      int ele2=arr[n-1];
      // cout<<"done"<<endl;
      int count1 =0;
      int count2=0;
      for(int i=0;i<n;i++){
        // cout<<"ele"<<i<<endl;
        if(arr[i]==ele1){
          count1++;
        }
        if(arr[i]==ele2){
          count2++;
        }

      }
      // cout<<"done2"<<endl;
      // cout<<"c1 c2 "<<count1<<" "<<count2<<endl;
      // cout<<n/2 <<' '<<(n+1)/2<<endl;


      if((count1==(n)/2) && (count2==(n+1)/2)){
        // cout<<"3"<<endl;
        res=1;
        // cout<<n/2 <<' '<<(n+1)/2<<endl;
      }
      else if((count1==(n+1)/2) && (count2==(n)/2)){
        // cout<<"4"<<endl;
        res=1;
        // cout<<n/2 <<' '<<(n+1)/2<<endl;
      }
    }


    if(res==1){
      cout<<"Yes"<<endl;
    }

    else{
      cout<<"No"<<endl;
    }
  
  }
  return 0;
}