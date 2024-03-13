#include<bits/stdc++.h>
using namespace std ;

int main(){
  int t;
  cin>> t;
  while(t--){
    int n,a,q;
    cin>>n>>a>>q;

    int res=0;
    int plus=0;
    char arr[q];
    // cout<<n<<' '<<a<<' '<<q<<endl;
    for(int i=0;i<q;i++){
        cin>>arr[i];
        if(arr[i]=='+'){
            plus++;
            
        }
        // cout<<plus<<endl;
    }
    


    

    if(plus+a<n){
        res=0;
    }
    else{
        res=2;
    }
    // cout<<res<<endl;
    
    int count=a;
    for(int i=0;i<q;i++){


        //for start case 
        if(count==n){
            res=1;
            }
        if(count>n){
            res=2;
        }



        if(arr[i]=='+'){
            count++;
        }
        else if(arr[i]=='-'){
            count--;
        }

        //for the end case 
        if(count==n){
            res=1;
            }
        if(count>n){
            res=2;
        }
        

    }
    // cout<<res<<endl;


    if(res==0){
        cout<<"NO"<<endl;
    }
    else if(res==1){
        cout<<"YES"<<endl;
    }
    else if(res==2){
        cout<<"MAYBE"<<endl;
    }

  }
  return 0;
}