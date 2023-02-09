#include "bits/stdc++.h"

using namespace std;


void solve(){

int n;
cin >> n;

char c;
cin >> c;

string str;
cin >> str;

vector <int> green;

for (int i = 0; i<n; i++){

if (str[i]=='g') green.push_back(i);


}

int mx = 0;

for (int i = 0; i<n; i++){

if (str[i] == c){
int f = 0;
auto it = lower_bound(green.begin(), green.end(), i);

if (it == green.end()){

it = green.begin();
f = 1;

}
if (f == 0){

mx = max(mx,*it - i);

}else {


mx = max(mx, n-i+*it);


}



}





}

cout << mx << "\n";


}





int main(){
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
int t;
cin >> t;

while(t--){


solve();


}

return 0;



}




