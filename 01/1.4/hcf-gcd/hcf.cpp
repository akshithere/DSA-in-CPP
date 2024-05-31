#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;
void hcfInAscending(int x, int y){
    int gcd = 1;
for(int i = 1; i <= min(x,y); i++){
if(x%i == 0 && y%i == 0){
    gcd = i;
}
}
cout << "The gcd found is: " << gcd << "\n";
}
void hcfInDescending(int x, int y){
    int gcd = 1;
    for(int i = min(x,y); i >= 1; i--){
        if(x%i==0 && y%i==0 ){
            gcd = i;
            break;
        }
    }
    cout << "The gcd found is: " << gcd;
}
int main(){
    int x,y;
  cout << "Enter x and y: " << "\n";
    cin >> x >> y;
  hcfInAscending(x,y);
  cout << "Enter x and y: " << "\n";
    cin >> x >> y;
  hcfInDescending(x,y);
    return 0;
}