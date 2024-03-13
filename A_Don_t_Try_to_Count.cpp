#include <iostream>
#include <string>

using namespace std;

int found(string s, string& x, int* count) {
    if (x.find(s) != string::npos) {
        return 1;
    } else if (x.size() >100* s.size()) {
        *count = -1;
        return 1;
    } else {
        x += x;
        (*count) += 1;
    }
    return 0;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;

        int count = 0;
        int* c = &count;
        int chalu = 0;

        while (chalu != 1) {
            chalu = found(s, x, c);
        }

        cout << count << endl;
    }

    return 0;
}
