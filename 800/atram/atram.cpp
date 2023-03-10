#include<bits/stdc++.h>

using namespace std;

int main () {

	/*

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	*/
	int t, a, b, c, ans;
	cin >> t;
	c = 0;
	ans = 0;




	while (t--) {

		cin >> a >> b;

		c += b - a;

		ans = max(ans, c);




	}

	cout << ans;






}
