#include<bits/stdc++.h>
using namespace std ;

int main(){
  int t;
  cin>> t;
  while(t--){
    int n,p;

    cin>>n;
    p=n;
    int s[n];
    int e[n];
    while(p--){
        cin>>s[n-p-1]>>e[n-p-1];
    }
    int p_s=s[0];
    int e_s=e[0];
    int w=s[0];

    vector<int> n_s;
    vector<int> n_e;
    for(int i=0; i<n;i++){
        if(s[i]>=w){
            n_s.push_back(s[i]);
            n_e.push_back(e[i]);
        }
    }

    auto  max_e = max_element(n_e.begin(),n_e.end());
    // cout<<*max_e<<endl;
    
    //e_s is the required endurance 
    int count=0;
    if(*max_e==e_s){
        for(int i=0; i<n_s.size(); i++){
            if(n_e[i]==*max_e){
                count++;
            }
     }
     if(count==1){
        cout<<w<<endl;
     }
     else{
        cout<<-1<<endl;
     }
    }
    else{
        cout<<-1<<endl;
    }

    
  }
  return 0;
}