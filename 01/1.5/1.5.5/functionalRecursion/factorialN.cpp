#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;
// This logic should work as expected why?
//  factorial kya hai? 5, 5*4*3*2*1 till n > 0
long long factorial(int n){
    if(n == 0) return 1;
    return n * factorial(n-1);
}
int main(){
    int n;
    cout << "Enter the number n of which you want to find the factorial of?: \n";
    cin >> n;
cout <<"The factorial is: "<<  factorial(n);
return 0;
}