#include<bits/stdc++.h>

using namespace std;

int main () {

	/*


	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	*/

	int n, c, maxi, prev;
	cin >> n;
	prev = 0;
	c = 0;
	maxi = 0;

	for (int i = 0; i < n; ++i)	{

		int num;
		cin >> num;

		if (num > prev) {
			c++;
		} else {
			c = 1;
		}

		prev = num;
		maxi = max(c, maxi);



	}

	cout << maxi;










}


