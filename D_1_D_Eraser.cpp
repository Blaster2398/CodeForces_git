#include<bits/stdc++.h>
using namespace std ;

int count_black(char arr[], int n ){
    int c_b=0;
    for(int i=0; i<n;i++){
        if(arr[i]=='B'){
            c_b++;
        }
    }
    return c_b;

}


int make_white( char arr[],  int k, int n){
    int c_b= count_black(arr,n);
    int count=0;
    // cout<<"value of c_b in function"<<c_b<<endl;
    if(c_b==0){
        return 0;
    }

    // cout<<count_black(arr,n-k)<<endl;
    for(int i=0;i<n-k ; i++){
        if(arr[i] =='B'){
            for(int j=i; j<i+k; j++){
                arr[j]='W';
            }
            count++;
        }
           
    }
    // cout<<"black in the removable ppart "<<count_black(arr,n-k)<<endl;
    // cout<<"total black remaining "<<count_black(arr,n)<<endl;

    if(count_black(arr,n-k)==0){
        if(count_black(arr,n)!=0){
            for(int i=n-k; i<n; i++){
                arr[i]='W';
            } 
            count++; 
        }
    }
    // cout<<"total black remaining "<<count_black(arr,n)<<endl;

    return count;

}


int main(){
  int t;
  cin>> t;
  while(t--){
    int n,k;
    cin>>n>>k;
    char arr[n];
    int count_b=0;
     
    for(int i=0; i<n;i++){
        cin>>arr[i];
        if(arr[i]=='B'){
            count_b++;
        }
    }


    int count=0;
    // int* p= &count;
    for(int i=0; i<count_b;i++ ){
        count+=make_white(arr,k,n);
        
        // cout<<"count is "<<count<<endl;
        // for(int i=0; i<n; i++){
        //     cout<<arr[i];
        // }
        // cout<<endl;
    }
    cout<<count<<endl;



  }
  return 0;
}