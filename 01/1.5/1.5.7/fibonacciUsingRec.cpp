#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

long long fibonacci(int i){
if(i == 0) return 0;
if(i == 1) return 1;
return fibonacci(i-1) + fibonacci(i-2);
}
int main(){
int n;
cout << "Enter the nth fibonacci number to be found: \n";
cin >> n;
cout << "The fibonacci number recieved is: " << fibonacci(n) << "\n";
return 0;
}