
// Problem source:  https://codeforces.com/problemset/problem/996/A


#include <bits/stdc++.h>

using namespace std;



void solve(int n){

int ans = 0;

while (n > 0){


if (n >= 100){

ans+= n / 100;
n = n % 100;

}else if (n >= 20){

ans+= n/20;
n = n%20;


}else if ( n >=10){

ans+= n/10;
n = n%10;

}else if(n >= 5){

ans+= n/5;
n = n%5;


}else if (n>=1){

ans+= n/1;
n= n%1;
}


}

cout << ans << "\n";








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


