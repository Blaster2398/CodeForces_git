#include<iostream>

using namespace std ;


bool ISthere(char s, string res){
    bool test =false;
    if(res==""){
        // cout<<"s="<<s<<" res="<<res<<"\n";
        return test;
    }else{
        for(char j:res){
            // cout<<"s="<<s<<" j="<<j<<" res="<<res<<"\n";
            if(s==j){
                return true;
            }
        }
        return test;
    }
}


int main(){
    string input;
    cin>>input;
    string res ="";
    for(char j:input){
        bool test=ISthere(j,res);
        // cout<<test<<endl;;
        if(test==false){
            res+= j;
        }

    }
    // cout<<res;
    int siz= res.size();
    if(siz%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}