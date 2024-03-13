#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> arr;

        for (int i = 0; i < n; i++) {
            cin >> arr[i].first;
        }
        int spell[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i].second;
            spell[i] = arr[i].second;
        }

    

        auto max_e = max_element(spell, spell + n);

        cout << "printing the list" << endl;
        for (int i = 0; i < n; i++) {
            cout << arr[i].first << " " << arr[i].second << endl;
        }

        int sum_health = 0;
        int sum_spell = 0;

        cout << "done2" << endl;
        cout << *max_e << endl;

        for (int i = 0; i < n; i++) {
            sum_health += arr[i].first;
        }

        for (int i = 0; i < n; i++) {
            if (i == 0 || i == n - 1) {
                sum_spell = arr[i].second;
            } else {
                if (arr[i].second != *max_e) {
                    sum_spell += 2 * arr[i].second;
                }
            }
        }

        int res = sum_health + sum_spell;

        cout << res << endl;
    }
    return 0;
}
