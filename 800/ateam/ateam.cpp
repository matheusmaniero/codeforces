#include<iostream>

using namespace std;

int main (){

int n=0;
int ans=0;
cin >> n;

while (n > 0){

int x,y,z;
cin >> x >> y >> z;

if ((x+y+z) >= 2){
ans+=1;	
}
n--;
}
cout << ans;	
}
