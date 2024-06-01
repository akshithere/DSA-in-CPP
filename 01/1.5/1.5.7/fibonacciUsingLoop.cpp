#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

int main(){
   int count = 0;
   int n;
   vector<int>f = {0,1};
   cout << "Enter the nth fibonacci number you want to find out: " << "\n";
   cin >> n;
   
   for(int i = 2; i <= n; i++){
    int curr = f[i-1] + f[i-2];
    f.emplace_back(curr);
    }
    cout << "Iterating... \n";
    for(auto i : f){
        cout << i << "\n";
    }
    
  return 0;
}