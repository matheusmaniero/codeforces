#include <bits/stdc++.h>

using namespace std;

int main() {
	/*

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	*/

	int n, m;
	cin >> n;
	cin >> m;

	string first = "";
	string last = "";
	string right = "";
	string left = "";
	bool is_right = true;

	for (int i = 0; i < m; i++) {
		first += "#";
		last += "#";
		if (i == 0) {
			right += "#";
		} else {
			right += ".";
		}
		if (i == (m - 1)) {
			left += "#";
		} else {
			left += ".";
		}


	}


	for (int i = 0; i < n; i++) {

		if (i % 2 == 0) {
			cout << first << "\n";
		} else if (is_right) {
			cout << left << "\n";
			is_right = false;
		} else {

			cout << right << "\n";
			is_right = true;

		}

	}

	return 0;


}