#include<bits/stdc++.h>
using namespace std ;

int spiral_count(int m, int n, char a[10][10])
{
    int i, k = 0, l = 0;
 
    /* k - starting row index
        m - ending row index
        l - starting column index
        n - ending column index
        i - iterator
    */
   int Count=0;
 
    while (k < m && l < n) {
        /* Print the first row from
               the remaining rows */
        int count=0;
        for (i = l; i < n; ++i) {
            if(a[k][i]=='X'){
                count++;
            }
        }
        k++;
 
        /* Print the last column
         from the remaining columns */
        for (i = k; i < m; ++i) {
            if(a[i][n - 1]=='X'){
                count++;
            }
        }
        n--;
 
        /* Print the last row from
                the remaining rows */
        if (k < m) {
            for (i = n - 1; i >= l; --i) {
                if(a[m - 1][i]=='X'){
                    count++;
                }
            }
            m--;
        }
 
        /* Print the first column from
                   the remaining columns */
        if (l < n) {
            for (i = m - 1; i >= k; --i) {
                if(a[i][l]=='X'){
                    count++;
                }
            }
            l++;
        }
        Count+= count*k;

    }
    return Count;
}

int main(){
  int t;
  cin>> t;
  while(t--){
    char arr[10][10];
    for(int i=0; i<10; i++){
        for(int j=0 ; j<10;j++){
            cin>>arr[i][j];  
        }
    }
    int result =spiral_count(10,10,arr);
    cout<<result<<endl;
  }
  return 0;
}