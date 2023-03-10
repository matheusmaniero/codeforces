#ifdef ONPC
    #define _GLIBCXX_DEBUG
#endif
#include <bits/stdc++.h>
//#include <deb.h>
#define sz(a) ((int)((a).size()))
#define char unsigned char
 
using namespace std;
// mt19937 rnd(239);
mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());
 
typedef long long ll;
typedef long double ld;
 
int solve() {
    string str="";
    cin >> str;
    int n = str.size();
    string ans="";
    //debug(str);

    std::vector<int>nums;

    for (int i = 0; i < n; i++) {
        if (str[i] != '+'){ 
            
            nums.push_back(str[i]);
            
        }
    }

   // debug(nums);

    std::sort(nums.begin(),nums.end());
    int c = nums.size();

    for (int i = 0; i < c; i++){
        ans+=nums[i];
        if (i != c-1){

            ans+="+";


        }
    }
    

    
    cout << ans << '\n';
    return 0;

}
 
int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
   
  
   
       solve();
           
        
        #ifdef ONPC
            cout << "__________________________" << endl;
        #endif
    
    #ifdef ONPC
        cerr << endl << "finished in " << clock() * 1.0 / CLOCKS_PER_SEC << " sec" << endl;
    #endif
}
