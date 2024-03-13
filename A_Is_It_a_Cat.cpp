#include <bits/stdc++.h>
using namespace std;

void check(){
    int n;
    cin >> n;
    string meow;
    cin >> meow;
    transform(meow.begin(), meow.end(), meow.begin(), [] (char c) {
        return tolower(c);
    });
    meow.erase(unique(meow.begin(), meow.end()), meow.end());
    cout << (meow == "meow" ? "YES" : "NO") << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        check
    }
}