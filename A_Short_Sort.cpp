#include<bits/stdc++.h>
using namespace std ;

int main(){
  int t;
  cin>> t;
  while(t--){
    string abc;
    cin>>abc;
    int res=0;

    if(abc[0]=='a'){
        res=1;
    }
    else if(abc[1]=='b'){
        res=1;
    }
    else if(abc[2]=='c'){
        res=1;
    }

    if(res==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
  }
  return 0;
}