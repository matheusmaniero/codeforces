#include<bits/stdc++.h>

using namespace std;

int main() {

	/*

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	*/

	int t;
	cin >> t;

	while (t--) {

		int n, m, changes;
		changes = 0;
		cin >> n >> m;

		for (int i = 0; i < n; ++i) {

			string s;
			cin >> s;



			for (int j = 0; j < m; ++j) {

				if ((s[j] == 'D' && i == n - 1) || (s[j] == 'R' && j == m - 1)) {

					changes++;


				}


			}



		}

		cout << changes << "\n";





	}



}