#include <set>
#include <string>
#include <iostream>

using namespace std;

int main(){

string result ="";
string str;
cin >> str;
set<string> vowels = {"A", "O", "Y", "E", "U", "I", "a", "o", "y", "e", "u", "i"};

for (int i = 0; i<str.size(); i++){

if (vowels.count(std::string(1,str[i]))>0){

continue;

}

result+="."+ std::string(1, tolower(str[i]));


}


cout << result <<"\n";



}
