#include<iostream>

using namespace std;

int main (){

int matrix[5][5];
int ans=0,x=0,y=0,mx=0,my=0;
for (int i=0; i<5; i++){

for (int j = 0; j<5; j++){
int value;
cin >> value;
if (value == 1){

x=i;
y=j;

}


matrix[i][j] = value;

}	


}

mx = 2-x;
my = 2-y;

ans = abs(mx)+ abs(my);

cout << ans<<endl;

}
