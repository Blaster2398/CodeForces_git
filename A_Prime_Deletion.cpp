#include<bits/stdc++.h>
using namespace std ;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin>> t;
  while(t--){
    string n;
    cin>>n;
    // we will just see for the prime 13 or 31 is present in the string or not  or 79 or 97 
    int found_9 =0;
    int found_7 =0;
    for(int i=0; i<9 ; i++){
        if(n[i]=='7'){
            found_7=i+1;
        }
        else if(n[i]=='9'){
            found_9=i+1;
        }

    }

    if(found_7>found_9){
        cout<<97<<endl;
    }
    else if(found_7<found_9){
        cout<<79<<endl;
    }

  }
  return 0;
}