#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

long long frSummation(int n){
if(n == 0) return 0;
return n + frSummation(n-1);
}
int main(){
int n;
cout << "Till what from 1 you want the summation to be calculated?: " << "\n";
cin >> n;
cout << "The summation found using functional Recursion is: " << "\n";
cout << frSummation(n) << " :D";

 return 0;
}