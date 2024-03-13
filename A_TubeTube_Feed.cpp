#include<bits/stdc++.h>
using namespace std ;


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin>> t;
  while(t--){
    int n,time;
    cin>>n>>time;

    vector<pair<int ,int>> tube(n);

    for(int i=0;i<n;i++){
        // if(i!=0){
        //     int var;
        //     cin>>var;
        //     var+=i;
        //     tube[i].first=var;
        // }
        // else{
        //     cin>>tube[i].first;
        // }    
        cin>>tube[i].first;
    }

    for(int i=0;i<n;i++){
        cin>>tube[i].second;
    }

        

    int res=0;
    int max_e=-99;
    for(int i=0; i<n;i++){
        if(tube[i].second>=max_e && tube[i].first+i<=time){
            max_e=tube[i].second;
            res=i+1;
        }
    }

    if(res){
        cout<<res<<endl;
    }
    else{
        cout<<-1<<endl;
    }


  }
  return 0;
}