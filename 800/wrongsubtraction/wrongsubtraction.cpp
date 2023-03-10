#include<bits/stdc++.h>

using namespace std;

int main () {

	/*

		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);

	*/
	int num, n;
	cin >> num >> n;

	while (n--) {

		(num % 10 == 0) ? num /= 10 : num -= 1;

	}

	cout << num;





}
