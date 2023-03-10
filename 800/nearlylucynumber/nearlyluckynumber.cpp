#include<bits/stdc++.h>

using namespace std;

int main () {

	/*

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	*/

	string num;

	cin >> num;
	int sum = 0;


	for (int i = 0; i < num.size(); i++) {




		if ((num[i] - '0' == 4) || (num[i] - '0' == 7)) {

			sum++;



		}
	}

	if (sum == 4 || sum == 7) {
		cout << "YES";
	} else {
		cout << "NO";
	}






}