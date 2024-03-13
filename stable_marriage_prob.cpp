#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool prefers(const vector<vector<int>>& preferences, int person, int partner, int potential_partner) {
    for (int i = 0; i < preferences[person].size(); i++) {
        if (preferences[person][i] == potential_partner)
            return true;
        if (preferences[person][i] == partner)
            return false;
    }
    return false;
}

vector<pair<int, int>> stableMarriage(const vector<vector<int>>& menPreferences, const vector<vector<int>>& womenPreferences) {
    int n = menPreferences.size();
    vector<int> menPartner(n, -1);
    vector<bool> womenEngaged(n, false);
    int freeMen = n;

    while (freeMen > 0) {
        int m;
        for (m = 0; m < n; m++) {
            if (menPartner[m] == -1)
                break;
        }

        for (int i = 0; i < n && menPartner[m] == -1; i++) {
            int w = menPreferences[m][i];
            if (!womenEngaged[w]) {
                menPartner[m] = w;
                womenEngaged[w] = true;
                freeMen--;
            } else {
                int currentPartner = menPartner[m];
                if (prefers(womenPreferences, w, currentPartner, m)) {
                    menPartner[m] = w;
                    menPartner[currentPartner] = -1;
                }
            }
        }
    }

    vector<pair<int, int>> stablePairs;
    for (int i = 0; i < n; i++) {
        stablePairs.push_back(make_pair(i, menPartner[i]));
    }

    return stablePairs;
}

int main() {
    // Example usage
    vector<vector<int>> menPreferences = {
        {1, 0, 2},
        {2, 0, 1},
        {0, 1, 2}
    };

    vector<vector<int>> womenPreferences = {
        {0, 1, 2},
        {1, 0, 2},
        {2, 0, 1}
    };

    vector<pair<int, int>> stablePairs = stableMarriage(menPreferences, womenPreferences);

    cout << "Stable Pairs:" << endl;
    for (const auto& pair : stablePairs) {
        cout << pair.first << " - " << pair.second << endl;
    }

    return 0;
}
