#include<bits/stdc++.h>

using namespace std;

int main() {
	/*

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	*/
	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;

	int qty_l = k * l;
	int each_l = qty_l / n;
	int slices = c * d;

	int qty_drink_salt = p / np;

	int drinks = min({each_l / nl, qty_drink_salt / n, slices / n});




	cout << drinks << "\n";

	return 0;

}