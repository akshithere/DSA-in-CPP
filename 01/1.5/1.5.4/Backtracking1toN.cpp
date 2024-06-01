#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

void print1ToN(int n){
if( n == 0) return;
print1ToN(n-1);
cout << n << "\n";
}
int main(){
    int n;
    cout << "Enter n till which you want to print.";
    cin >> n;
    print1ToN(n);
    return 0;
}