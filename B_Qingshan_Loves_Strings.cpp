#include<bits/stdc++.h>
using namespace std ;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin>> t;
  while(t--){
    int s,t;
    cin>>s>>t;
    string main;
    string aux;

    cin>>main;
    cin>>aux;

    int res=0;

    if(t%2!=0){     /// if t is even then it cannot fix any main string 
        int check=1;

        for(int i=0;i<t-1;i++){
            if(aux[i]==aux[i+1]){     // to check if the fixing sting is correct or not if it is not correct it cannot fix the main string 
                check=0;
            }
        }

        if(check==1){
            int s00=0;
            int s11=0;
            for(int i=0;i<s-1;i++){
                if(main[i]==main[i+1]){     // here i am counting the number of adjacent 00 or adjacent 11 
                    if(main[i]=='1'){
                        s11++;
                    }
                    else{
                        s00++;
                    }

                }
            }
            // cout<<s00<<' '<<s11<<endl;

            char ele = aux[0];

            if((s00==0 && s11==0) || s==1){            // if both are zeron then the string is alreadu correct 
                res=1;   
            }
            else if( ele =='0' && s00==0){              // if the aux starts with a 0 then it can not fix any adjacent 00
                res=1;
            }
            else if(ele =='1' && s11==0){               // if the aux starts with a 1 then it can not fix any adjacent 11
                res=1;
            }
        }
    }
    if(res==1){
        cout<<"Yes"<<endl;

    }
    else{
        cout<<"No"<<endl;
    }

  }
  return 0;
}