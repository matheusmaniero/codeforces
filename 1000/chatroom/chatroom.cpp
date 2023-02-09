#include<iostream>

using namespace std;

int main(){

string str = "hello";

string input_str;

cin >> input_str;

int found = -1;
for (int i =0; i<str.size(); i++){


char c = str[i];

found = input_str.find(c,found+1);

if (found == string::npos){

cout << "NO" << endl;
return 0;

}


}	

cout << "YES" << endl;
}
