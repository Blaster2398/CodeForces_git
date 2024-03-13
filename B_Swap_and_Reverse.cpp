#include<bits/stdc++.h>
using namespace std ;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin>> t;
  while(t--){
    int n,k;
    cin>>n>>k;
    string name;
    cin>>name;
    vector<pair<char,int>> str;
    // cout<<"done1"<<endl;
    for(int i=0; i<n;i++){
        str.push_back(make_pair(name[i],name[i]));   
    }
    // sort(str.begin(),str.end());
    
    // to switch the i and i+22 th index
    
    for(int i=0;i<n-2;i++){
        if(name[i]>name[i+2]){
            char l=name[i];
            name[i]=name[i+2];
            name[i+2]=l;
        }
    }

    // for reversing the array 
    for(int i=0;i<n-1;i++){
        if(name[i]>name[n-k+1]){
            reverse(name + i, name + (n - k + 1) + 1);

        }
    }

    for(int i=0;i<n-2;i++){
        if(name[i]>name[i+2]){
            char l=name[i];
            name[i]=name[i+2];
            name[i+2]=l;
        }
    }

    cout<<name<<endl;


    
    

        
    }
  
  return 0;
}
