#include<bits/stdc++.h>

using namespace std;

int main() {
	/*

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	*/

	int n, c, csave;

	string s;
	c = 1;
	csave = 1;

	string ans;
	ans = "";

	cin >> n >> s;

	for (int i = 0; i < n; ++i) {

		if (c > 0 ) {

			if ((c == csave)) {

				ans += s[i];
			}

			c--;
		} else {
			csave++;
			c = csave;
		}


	}

	cout << ans << "\n";





}