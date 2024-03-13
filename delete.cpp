#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int count = 0;
        int i = 0;

        while (i < n) {
            if (s[i] == 'B') {
                count++;
                i += k; // Jump over the 'B's
            } else {
                i++; // Move to the next position
            }
        }

        cout << count << endl;
    }

    return 0;
}
