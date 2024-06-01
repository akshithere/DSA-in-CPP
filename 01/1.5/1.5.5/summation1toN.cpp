#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

void summation(int &sum,int n, int i){
if( i > n) return;
sum+= i;
summation(sum,n,i+1);
}
int main(){
int sum = 0;
int n;
cout << "Enter n: " << "\n";
cin >> n;
// summation(sum,n,1);


 return 0;
}