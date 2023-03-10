#include<bits/stdc++.h>

using namespace std;

int main () {

	/*


	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	*/

	string str;
	cin >> str;

	set<char> set;

	int n = str.length();

	for (int i = 0; i < n; ++i)
	{
		set.insert(str[i]);
	}


	int size = set.size();

	if (size % 2 == 0) {
		cout << "CHAT WITH HER!" << "\n";
	} else {
		cout << "IGNORE HIM!" << "\n";
	}


}

