#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<int> ct;

        int count = 0;
        for (ll i = 1; i <= n; i++) {
            if (n % i == 0) {
                count++;
            } else {
                if (count > 0) {
                    ct.push_back(count);
                    count = 0;
                }
            }
        }

        // if (count > 0) {
        //     ct.push_back(count);
        // }

        // Sort and get the maximum count of consecutive divisors
        sort(ct.begin(), ct.end());
        reverse(ct.begin(), ct.end());

        cout << ct[0] << endl;
    }
    return 0;
}
