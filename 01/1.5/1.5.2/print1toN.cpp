#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

void printN(int i, int n){
    cout << i << "\n";
    if(i == n) return;
    printN(i+1,n);
}

int main(){
    int n; 
    cout << "Enter the number of times you want to prit? \n";
    cin >> n;
    printN(1,n);
    return 0;
}