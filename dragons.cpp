#include<bits/stdc++.h>
using namespace std;

int main(){
    int s,n ;
    cin>> s >> n;
    int arr[n][2];

    for(int i=0; i<n; i++){
        cin >> arr[i][0]>> arr[i][1];
    }
    //sort(arr, arr + n, [](const int a[], const int b[]) { return a[0] < b[0]; });
    
    sort(arr[0], arr[0]+n);
    

    
    for(int i =0; i<n; i++){
        int x=arr[i][0],y=arr[i][1];
        
        if(s<=x){
            cout<<"NO"<<endl;
            return 0;
        }
        else{
            s+=y;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}