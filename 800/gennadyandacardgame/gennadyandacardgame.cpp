#include<bits/stdc++.h>

using namespace std;

int main () {
	/*

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	*/

	string table_card = "";
	cin >> table_card;

	int n = 5;

	for (int i = 0; i < n; ++i) {

		string card;
		cin >> card;

		if (card[0] == table_card[0] || card[0] == table_card[1] || card[1] == table_card[0] || card[1] == table_card[1]) {
			cout << "YES" << "\n";
			return 0;
		}

	}

	cout << "NO" << "\n";



}


