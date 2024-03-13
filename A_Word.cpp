#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    string inp;
    cin>>inp;
    int count_u=0;
    int count_l=0;

    for(char i:inp){
        if(isupper(i)){
            count_u++;
        }
        else{
            count_l++;
        }
    }
    // cout<<count_l<<endl;
    // cout<<count_u<<endl;
    

    if(count_u>count_l){
        for(char& i: inp){
            i=toupper(i);

        }
    }
    else{
        for(char& i:inp){
            i=tolower(i);
        }
    }

    cout<<inp<<endl;
  return 0;
}