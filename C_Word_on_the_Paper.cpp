#include<bits/stdc++.h>
using namespace std ;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin>> t;
  while(t--){
    char mat[8][8];
    string t ="";
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>mat[i][j];
            if(mat[i][j]!='.'){
               t+=mat[i][j]; 
            }
        }
    }
    cout<<t<<endl;
  }
  return 0;
}