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
    int n,k;
    cin>>n>>k;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> health,power;
    bool marGayeKya[n] ={false};
    int deadMon =0;
    int sum = 0;

    // data entry
    int data=0;
    for(int i=0; i<n; i++){
        cin>>data;
        health.push(make_pair(data,i));
    }
    for(int i=0; i<n; i++){
        cin>>data;
        power.push(make_pair(data,i));
    }


    //main code 
    while(k>0 && deadMon<n){
        sum += k;
        while(health.empty() == false){
            int h1 = health.top().first;
            int i1 = health.top().second;
            h1 -= sum;
            if(h1 <= 0){
                marGayeKya[i1] = true;
                health.pop();
                deadMon++;
            }
            else{
                break;
            }
        }

        // this will take care of the monsters that are dead and are of least power which need too be popped 
        // as the power queue is not related to the health one we have to pop in this way 
        while(power.empty() == false && marGayeKya[power.top().second] == true){
            power.pop();
        }

        // if the power is not empty just update the k value to the latest min available 
        if(power.empty() == false){
            int p1=power.top().first;
            k -= p1;
        }


    }
    if(deadMon == n){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }




    }
    return 0;
}