#include<bits/stdc++.h>

using namespace std;

int main() {

	/*

		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	*/
	int n;
	cin >> n;
	vector<int> soldiers;
	int h_max = 0;
	int max_index = 0;
	int h_min = INT_MAX;
	int min_index = n - 1;
	bool cross = false;
	int ans;

	for (int i = 0; i < n; ++i)
	{
		int h;
		cin >> h;

		if (h > h_max) {
			h_max = h;
			max_index = i;

		} if (h < h_min) {
			h_min = h;
			min_index = i;
		} if (h_max == h && i < max_index) {

			max_index = i;

		} if (h_min == h && i > min_index) {
			min_index = i;
		}


	}



	if (max_index > min_index) {
		cross = true;
	}

	ans = abs(0 - max_index) + abs((n - 1) - min_index);

	if (cross) {
		cout << ans - 1 << "\n";
	} else {
		cout << ans << "\n";
	}









}