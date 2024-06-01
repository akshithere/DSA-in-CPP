#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

void summationBt(int i, int sum){
    if(i < 1) {
     cout << sum << "\n";
     return; }
    summationBt(i-1,sum+i);
}

int main(){
int sum = 0;
int n;
cout << "Enter n: " << "\n";
cin >> n;
// summation(sum,n,1);
summationBt(n,sum);

 return 0;
}