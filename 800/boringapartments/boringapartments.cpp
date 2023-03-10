#include<bits/stdc++.h>

using namespace std;

int main() {

	/*

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	*/
	int t, total;
	string num;

	cin >> t;

	while (t--) {

		cin >> num;

		int number = num[0] - '0';

		int i = number - 1;

		int entire = i * 10;

		if (num.size() == 1) total = entire + 1;
		if (num.size() == 2) total = entire + 3;
		if (num.size() == 3) total = entire + 6;
		if (num.size() == 4) total = entire + 10;

		cout << total << "\n";

	}





}