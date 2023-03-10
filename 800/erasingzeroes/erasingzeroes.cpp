#include<bits/stdc++.h>

using namespace std;

int main() {

	/*


	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	*/


	int sum, l, r, t;

	cin >> t;



	while (t--) {
		sum = 0;

		string s;
		cin >> s;

		l = s.find('1');
		r = s.rfind('1');

		if (l >= 0) {


			for (int i = l; i < r; ++i) {

				if (s[i] == '0') sum++;

			}

		}

		cout << sum << "\n";



	}










}

