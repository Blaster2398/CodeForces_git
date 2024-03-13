#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t;
    cin>> t;
    while(t--){
    string s;
    int n;
    cin>>s;
    n=s.size();
    int check=0;

    // to check if there is a consecutuive brackets (()
    for(int i=0; i<n; i++){
        char c = s[i];
        if(i!=0 && s[i]==s[i-1]){
            check=1;
        }
    }

    if(n==1 || (n==2 && s=="()")){
        cout<<"NO"<<endl;
        
    }   

    else if(check){
        
        string res = "";
        for(int i=0; i<n ;i++){
            res += "()";
        }
        cout<<"YES"<<endl;
        cout<<res<<endl;

    }  
    else if(~check){
        string res = "";
        for(int i=0; i<2*n ;i++){
            if(i<n){
                res += "(";
            }
            else{
                res += ")";
            }

        }
        cout<<"YES"<<endl;
        cout<<res<<endl;

    }   


  }
  return 0;
}