#include<bits/stdc++.h>
using namespace std ; 

int  main(){
  long long int t;
  cin>> t;
  while(t--){
    long long int n;  // number of elements in the outer array 
    cin>>n;

    long long int arr_min1[n];
    long long int arr_min2[n];

    for(long long int i=0; i<n;i++){
        long long int m;// that is the size of the mini arrays 
        cin>>m;
        long long int temp_arr[m];

        for(long long int j=0;j<m;j++){
            cin>>temp_arr[j];   
        }
    
        sort(temp_arr,temp_arr+m);
        arr_min1[i]=temp_arr[0];
        arr_min2[i]=temp_arr[1];
    }
        auto min_2 = min_element(arr_min2, arr_min2+n);
        auto min_1 = min_element(arr_min1,arr_min1+n);

        long long int sum=0;
        for(long long int i=0;i<n;i++){
            sum += arr_min2[i];
        }

        sum = sum - *min_2 + *min_1;

        cout<<sum<<endl;
    
  }
  return 0;
}