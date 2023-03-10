#include<bits/stdc++.h>

using namespace std;

int main () {

	/*

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	*/
	int x1, x2, x3;
	cin >> x1 >> x2 >> x3;

	int minX = min({x1, x2, x3});
	int maxX = max({x1, x2, x3});

	int meet_point = (maxX + minX) / 2;

	int result = abs(meet_point - minX) + abs(meet_point - maxX);

	cout << result << "\n";
}