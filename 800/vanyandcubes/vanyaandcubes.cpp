#include<bits/stdc++.h>
using namespace std;

int main() {


	/*


		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);


	*/
	int n, i, before_i_qty, current_total, total;
	cin >> n;
	i = 0;
	total = 0;
	current_total = 0;
	before_i_qty = 0;
	bool e = true;


	while (total  < n && e ) {

		i++;

		current_total = before_i_qty + i;
		before_i_qty = current_total;
		total += current_total;

		if ((current_total + i + 1) > (n - total)) {
			e =  false;
		}


	}

	cout << i;

















}