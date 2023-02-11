
// Problem source:  https://codeforces.com/problemset/problem/705/A


#include <bits/stdc++.h>

using namespace std;



void solve(int n){

string ans="";


for (int i =1; i<=n; i++){

ans+="I ";

if (i%2 == 0){

ans+="love";

}else {

ans+="hate";

}

if (i!=n){
ans+=" that ";

}else {

ans+=" it ";


}

}

ans.substr(0,n);

cout << ans << +"\n";



}

int main(){

ios::sync_with_stdio(0);
cin.tie(0); 
cout.tie(0);

int n;

cin >> n;


solve(n);

return 0;




}


