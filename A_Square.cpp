//Billo Bagge Billeyan Da Ki Karegi
//Bagge - Bagge Billeyan Da Ki Karegi

#include<bits/stdc++.h>
using namespace std ;

#pragma GCC optimise(2)
#pragma GCC optimise("O1")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

#define f(i,s,n) for(int i=s;i<n;i++)
#define inp(arr,n) for(int i=0;i<n;i++) cin>>arr[i];
#define out(arr,n) for(int i=0;i<n;i++) cout<<arr[i]<<" ";
#define fast_fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define convert_toint(a) static_cast<int>(std::round(a));

int main(){
    fast_fast
    int t;
    cin>> t;
    while(t--){
    int x1,x2,x3,x4;
    int y1,y2,y3,y4;
    int area=0;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    if(sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))<sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3))){
        area = (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
    }
    else{
        area = (x1-x3)*(x1-x3)+(y1-y3)*(y1-y3);
    }

    cout<<area<<endl;
   
}
 return 0;
}