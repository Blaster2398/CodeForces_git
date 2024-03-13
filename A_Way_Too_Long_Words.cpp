#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    while (n--) {
        string word;
        cin >> word;

        if (word.length() > 10) {
            string abbreviated = word[0] + to_string(word.length() - 2) + word[word.length()-1];
            cout << abbreviated << endl;
        } else {
            cout << word << endl;
        }
    }

    return 0;
}
