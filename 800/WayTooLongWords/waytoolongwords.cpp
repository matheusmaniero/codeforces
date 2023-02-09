#include <bits/stdc++.h>
using namespace std;

int main(){

int n;
cin >> n;
string result = "";
for (int i = 0; i<n; i++){

string temp;
cin >> temp;

if (temp.size() > 10){

result += temp[0]+ to_string(temp.size()-2) + temp[temp.size()-1]+"\n";

}else {

result += temp+"\n";
	
	
}


}

cout << result;

}

