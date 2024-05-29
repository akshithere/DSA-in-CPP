#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

int main(){
    int n = 5;
    // Nested loop hoga
    // Outer loop se rows sort kar
    // count columns and inner loop aisa set kar ki vo somehow outer loop se related ho 
    // find symmetry, take care of spaces
   for(int i = 0; i < n; i++){
    for(int j=0; j<n-i-1;j++){
        cout << " ";
    }
    for(int k = 1; k <= (2*i)+1; k++){
        cout << "*";
    }
    cout << "\n";

   

   }
    return 0;
}