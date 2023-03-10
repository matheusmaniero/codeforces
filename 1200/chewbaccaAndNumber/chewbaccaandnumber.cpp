#include<bits/stdc++.h>

using namespace std;

int main() {
	/*

		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	*/
	string num;
	cin >> num;

	string ans = "";


	for (int i = 0; i < num.length(); ++i)
	{
		int val = stoi(string(1, num[i]));

		int temp = 9 - val;
		if (temp == 0 && i == 0) {
			ans += to_string(val);
		} else if (temp <= val) {
			ans += to_string(temp);
		} else {
			ans += to_string(val);
		}
	}

	cout << ans << "\n";


	return 0;


}
