#include<bits/stdc++.h>
using namespace std ;

int main(){
  int t;
  cin>> t;
  while(t--){
    int arr[4];
    int inp;
    cin>>inp;
    int i=4;
    while(i--){
        int rem=inp%10;
        arr[i]=rem;
        inp=inp/10;
        
    }
    

    int count =0;
    for(int i=0; i<4; i++){
        int num=arr[i];

        if(num==0){
            num=10;
        }
        if(i==0){
            count+=num;

        }
        else{
            int prev_num=arr[i-1];
            if(num==0 ){
                num=10;
            }
            if(prev_num==0){
                prev_num=10;
            }
            count+=abs(prev_num-num)+1;

        
            
        }
        
        // cout<<"count is"<<count;
    }

    cout<<count<<endl;

  }
  return 0;
}