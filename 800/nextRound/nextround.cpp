#include <iostream>

using namespace std;

int main(){

int n,k;
cin >> n >> k;
int kPoint = 0;
int scores[n];
int result = 0;
for (int i=0; i<n; i++){

cin >> scores[i];


}

kPoint=scores[k-1];

for (int i=0; i<n; i++){

if (scores[i] >= kPoint && scores[i] > 0){

result++;

}

}

cout << result << endl;



}
