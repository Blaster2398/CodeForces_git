#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int t;
    cin>>t;
    while(t--){
        ll n;
	cin >> n;
	vector<pair<ll, ll>> arr(n);
	for (ll i = 0; i < n; i++) {
		ll x;
		cin >> x;
		arr[i].first = x;
		arr[i].second = i;
	}
	vector<ll> ans(n);
	sort(arr.begin(), arr.end());
	reverse(arr.begin(),arr.end());
	for (ll i = 0; i < n; i++) {
		ans[arr[i].second] = i + 1;
	}
	for (auto i : ans) {
		cout << i << ' ';
	}
	cout <<endl;
    }
}

