#include<iostream>


using namespace std;


int main(){

int n = 0;
cin >> n;
int result =0;


for (int i = 0; i<n; i++){

string operation;
cin >> operation;
if (operation.find('+')!= string::npos){
result++;

}else {

result--;
}

}
cout << result << endl;
}
