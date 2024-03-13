#include<bits/stdc++.h>
using namespace std ;
#define Int long long int 

int main(){
  int t;
  cin>> t;
  while(t--){
    Int n ;

    cin>>n;
    vector<Int> row;
    vector<Int> col;
    for(Int i=0;i<n;i++){
        Int input;
        cin>>input;
        row.push_back(input);
        
    }

    // cout<<endl;

    for(Int i=0;i<n;i++){
        Int input;
        cin>>input;
        col.push_back(input);
    }

    auto min_r = min_element(row.begin(),row.end());
    auto min_c = min_element(col.begin(),col.end());


    // cout<<*min_r<<'f'<<*min_c<<endl;

    Int sum_r=0;
    Int sum_c=0;
    // cout<<row.size()<<endl;


    for(Int i=0; i<row.size();i++){
        sum_r += row[i];
        sum_c += col[i];
    }

    // cout<<sum_r<<' '<<sum_c<<endl;
    Int result = min(sum_r+(n**min_c),sum_c+(n**min_r));
    cout<<result<<endl;



  }
  return 0;
}