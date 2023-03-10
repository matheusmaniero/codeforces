#include<bits/stdc++.h>

using namespace std;

int main () {

	/*



	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	*/


	int k, n, w, sum;

	cin >> k >> n >> w;
	sum = 0;

	while (w >= 1) {

		sum += w * k;
		w--;



	}

	if (sum > n) {
		cout << sum - n;
	} else {
		cout << 0;
	}









}