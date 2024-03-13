#include<bits/stdc++.h>
using namespace std ;

int main(){
  int t;
  cin>> t;
  while(t--){
    int res =0;
    int a,b,c;
    cin>>a>>b>>c;
    int men = min({a,b,c});
    int mux = max({a,b,c});
    int mid;
    if(men==a && mux==b){
        mid =c;
    }
    else if(men==b && mux==c){
        mid =a;
    }
    else if(men==c && mux==a){
        mid =b;
    }



    if(a==b  && b==c){
        res=1;
    }

    else if(men==mid  && (mux==men*4 || mux==men*3  || mux==men*2 )){
        
        res=1;
    }

    else if(mid<2*a){
        res=0;
    }

    else if(mid==2*a && (mux==men*2 || mux==men*3))
    
    if(res==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

  return 0;
}