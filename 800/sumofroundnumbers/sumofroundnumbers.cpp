#include<bits/stdc++.h>

using namespace std;

void solve() {

	string str = "";
	cin >> str;
	int mult = 1;
	string ans = "";
	int q = 0;

	for (int i = str.length() - 1; i >= 0 ; --i) {

		int num = str[i] - '0';

		if (num != 0 ) {

			ans += to_string(mult * num) + " ";
			q++;


		}

		mult *= 10;


	}
	cout << q << "\n";

	cout << ans << "\n";




}






int main () {
	/*

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	*/
	int t;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;




}
