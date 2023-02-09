
#include<bits/stdc++.h>

using namespace std;

void solve(){
  long long n;
  cin >> n;

  vector <long long> arr;

  long long qty_blue = n-1;
  long long qty_red = 1;
  long long sum_blue=0;
  long long sum_red=0;

  for (long long i = 0; i<n; i++){
    long long number;
    cin >> number;
    arr.push_back(number);
  }

  sort(arr.begin(),arr.end());

  sum_red = arr.back();
  sum_blue = accumulate(arr.begin(),arr.end()-1,0LL);

  long long right=n-1;
  long long left = right-1;

  while(left >= 0 && right >= (n/2)){
    long long temp=0;
    if (sum_red <= sum_blue){
      temp=arr[left];
      sum_blue -= arr[left];
      left--;
      qty_blue--;
    }
    if (sum_blue < sum_red && qty_red < qty_blue){
      cout << "YES" << endl;
      return;
    }
    sum_red += temp;
    qty_red += 1;
    right--;
  }

  cout << "NO" << endl;
}

int main (){
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
  long long t;
  cin >> t;

  while(t--){
    solve();
  }
  return 0;
}




