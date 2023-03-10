#include<bits/stdc++.h>

using namespace std;

int main () {

	/*



	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	*/

	int l, b, y;
	cin >> l >> b;
	y = 0;

	while (l <= b) {
		l *= 3;
		b *= 2;
		y++;
	}

	cout << y;





}
