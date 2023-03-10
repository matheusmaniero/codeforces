#include<bits/stdc++.h>

using namespace std;

void solve(int a, int b, int n) {



	int op = 0;

	while (max(a, b) <= n) {
		(a < b) ? a += b : b += a;
		op++;
	}

	cout << op << endl;



}

int main () {

	/*


	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	*/
	int t;
	cin >> t;
	while (t--) {

		int a, b, n;

		cin >> a >> b >> n;

		solve(a, b, n);
	}






}