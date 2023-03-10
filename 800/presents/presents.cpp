#include<bits/stdc++.h>

using namespace std;

int main () {
	/*
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	*/
	int n;
	cin >> n;
	vector<int> v(n + 1);

	for (int i = 0; i < n; ++i)	{

		int g;
		cin >> g;
		v[g] = i + 1;


	}

	for (int i = 1; i < n + 1; ++i)
	{
		cout << ' ' << v[i];
	}

	return 0;


}


