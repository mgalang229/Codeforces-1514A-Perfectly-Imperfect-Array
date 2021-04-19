#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		bool checker = true;
		for (int i = 0; i < n; i++) {
			int temp = sqrt(a[i]);
			// check every element if there is a number that is NOT a perfect square
			if (temp * temp != a[i]) {
				// if yes, then set 'checker' to false and break the loop
				checker = false;
				break;
			}
		}
		cout << (!checker ? "YES" : "NO") << '\n';
	}
	return 0;
}
