#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

// I am able to find summation using parameterised recursion; 

void printNto1(int i, int n){
if(i > n) return;
printNto1(i+1,n);
cout << i << "\n";
}
int main(){
    int n;
    cout << "Enter till what you want to print: ";
    cin >> n;
    printNto1(1,n);
    return 0;
}