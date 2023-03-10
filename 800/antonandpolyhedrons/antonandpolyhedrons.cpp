#include<bits/stdc++.h>

using namespace std;

int main () {

	/*


	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	*/
	int n;
	cin >> n;
	int sum = 0;

	unordered_map<string, int> m = {{"Tetrahedron", 4}, {"Cube", 6},
		{"Octahedron", 8}, {"Dodecahedron", 12}, {"Icosahedron", 20}
	};

	for (int i = 0; i < n; ++i)
	{
		string str;
		cin >> str;
		sum += m[str];
	}

	cout << sum << "\n";

	return 0;














}
