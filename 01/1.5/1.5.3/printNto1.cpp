#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

void printNto1(int n){
 if(n == 0) return;
 cout << n << "\n";
 printNto1(n-1);
}
int main(){
    int n;
    cout << "Enter from where you want to print? \n";
    cin >> n;
    printNto1(n);
 return 0;
}