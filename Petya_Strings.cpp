// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    string first , second ;
    cin>> first >> second;
    
    // Convert the string to lowercase
    transform(first.begin(), first.end(), first.begin(), ::tolower);
    transform(second.begin(), second.end(), second.begin(), ::tolower);
    // char lowercaseCh = ch + ('a' - 'A');
    // char lowercaseCh = tolower(ch);
    if(first == second){
        cout<<0;
    }
    else if(first>second){
        cout<<1;
    }
    else{
        cout<<-1;
    }
}